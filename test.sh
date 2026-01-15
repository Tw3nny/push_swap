#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo "=========================================="
echo "       TESTS DE FUITES MÉMOIRE"
echo "=========================================="

test_leak() {
	local description="$1"
	shift
	echo -e "\n${YELLOW}Test: $description${NC}"
	
	# Lance leaks et capture le résultat
	result=$(leaks -atExit -- ./push_swap "$@" 2>&1)
	
	if echo "$result" | grep -q "0 leaks for 0 total leaked bytes"; then
		echo -e "${GREEN}✓ Aucune fuite mémoire${NC}"
	else
		echo -e "${RED}✗ FUITE DÉTECTÉE !${NC}"
		echo "$result" | grep "leaks for"
	fi
}

echo -e "\n${YELLOW}=== CAS NORMAUX ===${NC}"
test_leak "2 nombres" 2 1
test_leak "3 nombres" 3 2 1
test_leak "5 nombres" 5 4 3 2 1
test_leak "Déjà trié" 1 2 3 4 5

echo -e "\n${YELLOW}=== AVEC SPLIT ===${NC}"
test_leak "Arguments avec espaces" "1 2 3"
test_leak "Espaces multiples" "1  2   3"

echo -e "\n${YELLOW}=== CAS D'ERREURS (critique !) ===${NC}"
test_leak "Doublons" 1 2 2
test_leak "Caractères invalides" 1 2 abc
test_leak "Overflow" 2147483648
test_leak "Signe seul" +

echo -e "\n${YELLOW}=== GROS TEST ===${NC}"
ARG=$(seq 1 100 | sort -R | tr '\n' ' ')
test_leak "100 nombres aléatoires" $ARG

echo -e "\n=========================================="
echo "       RÉSUMÉ"
echo "=========================================="
echo "Si tous les tests affichent ✓, tu n'as"
echo "aucune fuite mémoire ! 🎉"
echo "=========================================="
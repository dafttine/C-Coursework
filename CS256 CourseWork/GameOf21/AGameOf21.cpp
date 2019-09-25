#include "stdafx.h"
#include "AGameOf21.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

AGameOf21::AGameOf21() {
}

int AGameOf21::getComputerScore() {
	return computerScore;
}

int AGameOf21::getPlayerScore() {
	return playerScore;
}

void AGameOf21::setComputerScore(int roll) {
	computerScore += roll;
}

void AGameOf21::setPlayerScore(int roll) {
	playerScore += roll;
}

int AGameOf21::rollDie() {
	int roll;
	const int MIN_VALUE = 1; 
	roll = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
	return roll;
}
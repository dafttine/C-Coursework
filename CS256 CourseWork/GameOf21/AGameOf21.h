#pragma once
class AGameOf21 {
private:
	int const sides = 6;
	int computerScore=0;
	int playerScore=0;
public:
	AGameOf21();
	int getComputerScore();
	int getPlayerScore();
	void setComputerScore(int roll);
	void setPlayerScore(int roll);
	int rollDie();
};
// Function for creating the game board & rendering
void GameRender(string playerName)
{
    system("cls"); // Clear the console

    // Creating top walls with '-'
    for (int i = 0; i < width + 2; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width + 2; j++) {
            // Creating side walls with '|'
            if (j == 0 || j == width + 1) {
                cout << "|";
            }
            // Creating snake's head with 'O'
            else if (i == y && j == x + 1) {
                cout << "O";
            }
            // Creating the snake's food with '#'
            else if (i == fruitCordY && j == fruitCordX + 1) {
                cout << "#";
            }
            // Creating snake's tail with 'o'
            else {
                bool prTail = false;
                for (int k = 0; k < snakeTailLen; k++) {
                    if (snakeTailX[k] == j - 1 && snakeTailY[k] == i) {
                        cout << "o";
                        prTail = true;
                    }
                }
                if (!prTail) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    // Creating bottom walls with '-'
    for (int i = 0; i < width + 2; i++) {
        cout << "-";
    }
    cout << endl;

    // Display player's score
    cout << playerName << "'s Score: " << playerScore << endl;
}

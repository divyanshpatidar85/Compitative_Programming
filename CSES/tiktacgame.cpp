#include <bits/stdc++.h>
using namespace std;
bool winner(char game[][3], char c, int row, int column)
{
    bool win = false;
    // column
    for (int hello = 0; hello < 3; hello++)
    {
        if (game[hello][column] == c && win == false)
        {
            if (hello == 2)
                win = true;
        }
        else
        {
            break;
        }
    }
    for (int hello = 0; hello < 3; hello++)
    {
        if (game[row][hello] == c && win == false)
        {
            if (hello == 2)
                win = true;
        }
        else
        {
            break;
        }
    }
    int fir = 0, sec = 0;
    while (fir < 3 && sec < 3)
    {
        if (game[fir][sec] == c && win == false)
        {
            if (fir == 2)
                win = true;
            fir++;
            sec++;
        }
        else
        {
            break;
        }
    }
    fir = 0, sec = 2;
    while (fir < 3 && sec >= 0)
    {
        if (game[fir][sec] == c && win == false)
        {
            if (fir == 2)
                win = true;
            fir++;
            sec--;
        }
        else
        {
            break;
        }
    }
    // cout << " win charcter " << c << "  " << win << endl;
    return win;
}
void cheacker(int *j, int *k)
{
    int l, m;

    cin >> l >> m;
    *j = l;
    *k = m;
}
void printer(char game[][3])
{
    for (int mon = 0; mon < 3; mon++)
    {
        for (int n = 0; n < 3; n++){
            if(game[mon][n]=='X'||game[mon][n]=='O')
            cout << game[mon][n]<<" | ";
            else
            cout<<"  | ";
        }
        cout << endl;
    }
}
bool functionn(char game[][3], int i)
{
    bool winnerr = false;
    int j, k;
    cout << "User 1 : " << endl;

    cin >> j >> k;
    while (game[j][k] == 'X' || game[j][k] == 'O' || j >= 3 || k >= 3)
    {
        cout << "invalid input\n ";
        cout << "User 1 : " << endl;
        cheacker(&j, &k);
    }
    game[j][k] = 'X';
    printer(game);
    winnerr = winner(game, 'X', j, k);
    if (winnerr == true){
            cout<<"User 1 is winner \n ";
        return true;
    }
    if (i != 4)
    {

        cout << "User 2 : \n";
        cin >> j >> k;
        while (game[j][k] == 'X' || game[j][k] == 'O' || j >= 3 || k >= 3)
        {
            cout << "invalid input\n ";
            cout << "User 2 : " << endl;
            cheacker(&j, &k);
        }
        game[j][k] = 'O';
        printer(game);
        winnerr = winner(game, 'O', j, k);
        if (winnerr == true){
            cout<<"User 2 is winner \n ";
    return true;
        }
            
    }
    return false;
}

int main()
{

    char game[3][3] = {' '};
    for (int i = 0; i < 5; i++)
    {
        bool fun = functionn(game, i);
        if (fun == true)
        {
            break;
        }else if( i==4){
             cout<<" Match is draw \n";
        }
        
    }
   

    return 0;
}
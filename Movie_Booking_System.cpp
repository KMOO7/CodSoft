#include <iostream>
using namespace std;
int num_tickets;
const int hall_rows = 5;
const int hall_cols = 10;
const double ticket_price = 150.0;

void displaymov();
void booktickets();
void bookseats(int row, int col);
void totalcost();

int main()
{
    int user_choice;
    do
    {
        cout << "\n---------------------------------\n";
        cout << "Welcome to Movie Booking Software\n";
        cout << "---------------------------------\n";
        cout << "Menu\n"
                "1. Movies of the day\n"
                "2. Book Tickets\n"
                "3. Book Seat Number\n"
                "4. Review Total Cost\n"
                "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> user_choice;
        if (user_choice < 1 || user_choice > 5)
        {
            cout << "Invalid Selection, Please try again\n";
            continue;
        }
        else if (user_choice == 1)
        {
            displaymov();
        }
        else if (user_choice == 2)
        {
            booktickets();
        }
        else if (user_choice == 3)
        {
            bookseats(hall_rows,hall_cols);
        }
        else if (user_choice == 4)
        {
            totalcost();
        }
        else
        {
            cout << "Thanks for using are software:)\n";
            cout << "Goodbye, Hope to see you soon:)";
            break;
        }

    } while (true);
    return 0;
}

void displaymov()
{
    cout << "------------------------\n"
            "Movies airing today are:\n"
            "------------------------\n"
            "1. Doraemon\n"
            "2. Shinchan\n"
            "3. Dragon Ball\n"
            "4. Jujutsu Kaisen\n"
            "5. Seven Deadly Sins\n";
}

void booktickets()
{
    int mov_num;
    cout << "\nEnter the Movie number as per chart you want to book tickets for: ";
    cin >> mov_num;
    if (mov_num < 1 || mov_num > 5)
    {
        cout << "Invalid Selection, Please try again\n";
    }

    else
    {
        cout << "Enter the number of tickets for this movie to be booked: ";
        cin >> num_tickets;
        cout << "Your " << num_tickets << " Movie tickets have been booked\n";
        cout << "Move forward to book your seats\n";
    }
}

void bookseats(int row, int col)
{
    if(num_tickets==0)
    {
        cout<<"Please book your tickets first to book your seats";
    }
    
    else
    {
        // Initialize a two-dimensional array to represent the seats
        char seats[row][col];
        cout<<"--------------------\n";
        cout<<"Theatre Seat Map:\n";
        cout<<"--------------------\n";
    
        // Assume all seats are initially available
        for(int i=0; i<row;++i)
        {
            for(int j=0; j<col;++j)
            {
            seats[i][j]='O';
            }
        }   
    
        // Mark some seats as reserved (you can modify this based on your actual reservation data)
        seats[1][2] = 'X';
        seats[3][5] = 'X';
        seats[4][8] = 'X';
        
        // Display the seat map with reserved seats marked as 'X'
        for(int i=0; i<row;++i)
        {
            for(int j=0; j<col;++j)
            {
             cout<<seats[i][j]<<" ";
            }
            cout<<"\n";
        }   
        
        // Ask the user to choose their seats
        int chosen_row, chosen_col;
        cout<<"The available row no. are from 0-5 and column no. are from 0-9\n";
        cout << "Enter the row number for your seat: ";
        cin >> chosen_row;
        cout << "Enter the column number for your seat: ";
        cin >> chosen_col;
        
         if (chosen_row >= 0 && chosen_row < row && chosen_col >= 0 && chosen_col < col && seats[chosen_row][chosen_col] == 'O')
    {
        // Book the chosen seat
        seats[chosen_row][chosen_col] = 'X';

        // Display the updated seat map with the booked seat marked as 'X'
        cout << "--------------------\n";
        cout << "Updated Theatre Seat Map:\n";
        cout << "--------------------\n";
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout << seats[i][j] << " ";
            }
            cout << "\n";
        }

        // Display the user's booked seat
        cout << "Your seat has been booked at Row " << chosen_row << ", Column " << chosen_col << "\n";
    }
    else
    {
        cout << "Invalid seat selection. Please choose a valid and available seat.\n";
    }
        
    } 
}

void totalcost(){
    int cost;
    cost= ticket_price*num_tickets;
    if(num_tickets==0)
    {
        cout<<"\n------------------------------\n";
        cout<<"Please book your tickets first";
        cout<<"\n------------------------------\n";
    }
    else
    {
        cout<<"\n--------------------------------------------------\n";
        cout<<"Review of your Movie ticket purchase are as follow\n";
        cout<<"--------------------------------------------------\n";
        cout<<"Number of tickets you book for show our: "<<num_tickets<<endl;
        cout<<"Total Cost for your purchase our: "<<cost<<endl;
    }
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Welcome message
    cout << "The Property of Afrique Youth Election Observers. All rights reserved\n";
    cout << "=========================================2014 SOUTH AFRICAN GENERAL ELECTION=========================================\n\n";

    // Declare variables
    double percent = 100;
    int Totalpublishedcenters, TotalRegisteredvotes, Totalvotescast, Nullandvoid, Totalvalidvotes;
    int Totalvalidvotesfor_African_National_Congress, Totalvalidvotesfor_Democratic_Alliance, Totalvalidvotesfor_Economic_Freedom_Fighters;
    int Totalvalidvotesfor_Inkatha_Freedom_Party, Totalvalidvotesfor_National_Freedom_Party, Totalvalidvotesfor_United_Democratic_Movement;
    int Totalvalidvotesfor_Freedom_Front_Plus, Totalvalidvotesfor_African_Christian_Democratic_Party, Totalvalidvotesfor_African_Independent_Congress;
    int Totalvalidvotesfor_Agang_South_Africa, Totalvalidvotesfor_Pan_Africanist_Congress, Totalvalidvotesfor_African_Peoples_Convention;
    int Totalvalidvotesfor_Al_Jama_ah, Totalvalidvotesfor_Minority_Front, Totalvalidvotesfor_United_Christian_Democratic_Party;
    int Totalvalidvotesfor_Azanian_Peoples_Organisation, Totalvalidvotesfor_Bushbuckridge_Residents_Association, Totalvalidvotesfor_Independent_Civic_Organisation;
    int Totalvalidvotesfor_Patriotic_Alliance, Totalvalidvotesfor_Workers_and_Socialist_Party, Totalvalidvotesfor_Ubuntu_Party;
    int Totalvalidvotesfor_Kingdom_Governance_Movement, Totalvalidvotesfor_Front_National, Totalvalidvotesfor_Keep_It_Straight_and_Simple_Party;
    int Totalvalidvotesfor_Pan_Africanist_Movement, Totalvalidvotesfor_First_Nation_Liberation_Alliance, Totalvalidvotesfor_United_Congress;
    int Totalvalidvotesfor_Peoples_Alliance;

    // Get total number of published centers
    cout << "Enter Total published centers: ";
    cin >> Totalpublishedcenters;
    
    // Get the total number of registered votes
    cout << "Enter Total Registered Voters/Turnout:";
    cin >> TotalRegisteredvotes;
    
    // Get the total number of votes cast
    cout << "Enter Total Votes Cast /Total Votes:";
    cin >> Totalvotescast;
    
    // Get total number of Null & Void votes
    cout << "Enter Total Null_&_Void Votes / Invalid Votes:";
    cin >> Nullandvoid;
    
    // Get total valid votes
    cout << "Enter Total Valid Votes: ";
    cin >> Totalvalidvotes;
    
    // Get valid votes for each party
    cout << "Enter Total Valid Votes for African National Congress:";
    cin >> Totalvalidvotesfor_African_National_Congress;
    
    cout << "Enter Total Valid Votes for Democratic Alliance:";
    cin >> Totalvalidvotesfor_Democratic_Alliance;
    
    cout << "Enter Total Valid Votes for Economic Freedom Fighters:";
    cin >> Totalvalidvotesfor_Economic_Freedom_Fighters;
    
    cout << "Enter Total Valid Votes for Inkatha Freedom Party:";
    cin >> Totalvalidvotesfor_Inkatha_Freedom_Party;
    
    cout << "Enter Total Valid Votes for National Freedom Party:";
    cin >> Totalvalidvotesfor_National_Freedom_Party;
    
    cout << "Enter Total Valid Votes for United Democratic Movement:";
    cin >> Totalvalidvotesfor_United_Democratic_Movement;
    
    cout << "Enter Total Valid Votes for Freedom Front Plus:";
    cin >> Totalvalidvotesfor_Freedom_Front_Plus;
    
    cout << "Enter Total Valid Votes for African Christian Democratic Party:";
    cin >> Totalvalidvotesfor_African_Christian_Democratic_Party;
    
    cout << "Enter Total Valid Votes for African Independent Congress:";
    cin >> Totalvalidvotesfor_African_Independent_Congress;
    
    cout << "Enter Total Valid Votes for Agang South Africa:";
    cin >> Totalvalidvotesfor_Agang_South_Africa;
    
    cout << "Enter Total Valid Votes for Pan Africanist Congress:";
    cin >> Totalvalidvotesfor_Pan_Africanist_Congress;
    
    cout << "Enter Total Valid Votes for African Peoples Convention:";
    cin >> Totalvalidvotesfor_African_Peoples_Convention;
    
    cout << "Enter Total Valid Votes for Al Jama ah:";
    cin >> Totalvalidvotesfor_Al_Jama_ah;
    
    cout << "Enter Total Valid Votes for Minority Front:";
    cin >> Totalvalidvotesfor_Minority_Front;
    
    cout << "Enter Total Valid Votes for United Christian Democratic Party:";
    cin >> Totalvalidvotesfor_United_Christian_Democratic_Party;
    
    cout << "Enter Total Valid Votes for Azanian Peoples Organisation:";
    cin >> Totalvalidvotesfor_Azanian_Peoples_Organisation;
    
    cout << "Enter Total Valid Votes for Bushbuckridge Residents Association:";
    cin >> Totalvalidvotesfor_Bushbuckridge_Residents_Association;
    
    cout << "Enter Total Valid Votes for Independent Civic Organisation:";
    cin >> Totalvalidvotesfor_Independent_Civic_Organisation;
    
    cout << "Enter Total Valid Votes for Patriotic Alliance:";
    cin >> Totalvalidvotesfor_Patriotic_Alliance;
    
    cout << "Enter Total Valid Votes for Workers and Socialist Party:";
    cin >> Totalvalidvotesfor_Workers_and_Socialist_Party;
    
    cout << "Enter Total Valid Votes for Ubuntu Party:";
    cin >> Totalvalidvotesfor_Ubuntu_Party;
    
    cout << "Enter Total Valid Votes for Kingdom Governance Movement:";
    cin >> Totalvalidvotesfor_Kingdom_Governance_Movement;
    
    cout << "Enter Total Valid Votes for Front National:";
    cin >> Totalvalidvotesfor_Front_National;
    
    cout << "Enter Total Valid Votes for Keep It Straight and Simple Party:";
    cin >> Totalvalidvotesfor_Keep_It_Straight_and_Simple_Party;
    
    cout << "Enter Total Valid Votes for Pan Africanist Movement:";
    cin >> Totalvalidvotesfor_Pan_Africanist_Movement;
    
    cout << "Enter Total Valid Votes for First Nation Liberation Alliance:";
    cin >> Totalvalidvotesfor_First_Nation_Liberation_Alliance;
    
    cout << "Enter Total Valid Votes for United Congress:";
    cin >> Totalvalidvotesfor_United_Congress;
    
    cout << "Enter Total Valid Votes for People's Alliance:";
    cin >> Totalvalidvotesfor_Peoples_Alliance;

    // Decision making
    if (Totalvalidvotesfor_African_National_Congress > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African National Congress For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Democratic_Alliance > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Democratic Alliance For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Economic_Freedom_Fighters > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Economic Freedom Fighters For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Inkatha_Freedom_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Inkatha Freedom Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_National_Freedom_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the National Freedom Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_United_Democratic_Movement > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the United Democratic Movement For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Freedom_Front_Plus > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Freedom Front Plus For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_African_Christian_Democratic_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African Christian Democratic Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_African_Independent_Congress > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African Independent Congress For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Agang_South_Africa > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Agang South Africa For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Pan_Africanist_Congress > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Pan Africanist Congress For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_African_Peoples_Convention > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African People's Convention For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Minority_Front > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Minority Front For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_United_Christian_Democratic_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the United Christian Democratic Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Azanian_Peoples_Organisation > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Azanian Peoples Organisation For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Bushbuckridge_Residents_Association > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Bushbuckridge Residents Association For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Independent_Civic_Organisation > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Independent Civic Organisation For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Patriotic_Alliance > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Patriotic Alliance For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Workers_and_Socialist_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Workers and Socialist Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Ubuntu_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Ubuntu Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Kingdom_Governance_Movement > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Kingdom Governance Movement For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Front_National > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Front National For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Keep_It_Straight_and_Simple_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Keep It Straight and Simple Party For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Pan_Africanist_Movement > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Pan Africanist Movement For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_First_Nation_Liberation_Alliance > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the First Nation Liberation Alliance For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_United_Congress > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the United Congress For Winning 2014 Election\n\n";
    } else if (Totalvalidvotesfor_Peoples_Alliance > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the People's Alliance For Winning 2014 Election\n\n";
    } else {
        cout << "No majority winner was found. A runoff may be required.\n";
    }

    // Calculate percentages
    cout << "__________________________________________________________ELECTION STATISTICS__________________________________________________________\n";
    
    // Calculate and display the percentage statistics
    cout << fixed << setprecision(2);
    
    cout << "Total Votes Cast in percentage = " << (Totalvotescast * percent / TotalRegisteredvotes) << "%" << endl;
    cout << "Total Valid Votes for all candidates in percentage = " << (Totalvalidvotes * percent / Totalvotescast) << "%" << endl;
    cout << "Total Null & Void votes in percentage = " << (Nullandvoid * percent / Totalvalidvotes) << "%" << endl;
    cout << "Total Registered voters/turnout in percentage = " << (Totalvotescast * percent / TotalRegisteredvotes) << "%" << endl;
    cout << "Total Registered voters and Polling Station turnout in percentage = " << (Totalvalidvotes * percent / Totalvotescast) << "%" << endl;

    return 0;
}

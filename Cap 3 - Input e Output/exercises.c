// Exercicios de C - Livro C: A modern Approach
// Data: 15 jul 2026 12:32 PM

#include <stdio.h>



// PROGRAMMIN PROJECTS


void project_1() {

    /*
        Write a program that accepts a date from the user in the form mm/ dd / yyyy and then displays it in the form yyyymmdd
        Enter a date (mm/dd/yyyy): 2/l7/20ll
        Result: You entered the date 20110217
    */

    int dia, mes, ano;
    
    printf("Enter the data: (mm/dd/yyyy): ");
    dia = 1;
    mes = 1;
    ano = 1;

    scanf("%2d/%2d/%d", &mes, &dia, &ano);

    while (!(mes > 0 && mes <= 12 && dia > 0 && dia <= 31 && ano >= 0  && ano <= 9999)) {
        printf("Invalid Date! \n");
        printf("Please, enter a valid date! : (mm/dd/yyyy): ");
        scanf("%2d/%2d/%4d", &mes, &dia, &ano);
    }
    printf("You entered the date: %.4d%.2d%.2d\n", ano, dia, mes);
}

void project_2() {
    /*
        Write a program that formats product information entered by the user. A session with the program should look like this:
        Enter item number: 583
        Enter unit price: 13.5
        Enter purchase date (mm/dd/yyyy): 10/24/2010
                
        Item    Unit Price  Purchase Date     
        583     $ 13.50     10/24/2010
    */

    int item_num, mm, dd, yyyy;
    float unit_price;

    dd = 1;
    mm = 1;
    yyyy = 1;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("\nEnter unit price: ");
    scanf("%f", &unit_price);

    printf("\nEnter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    while (!(mm > 0 && mm <= 12 && dd > 0 && dd <= 31 && yyyy >= 0  && yyyy <= 9999)) {
        printf("\nInvalid Date! ");
        printf("\nPlease, enter a valid date! : (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &mm, &dd, &yyyy);
    }

    printf("\nItem\tUnit\tPurchase");
    printf("\n\tPrice\tDate");
    printf("\n%d\t$ %.2f\t%2d/%2d/%4d \n", item_num, unit_price, mm, dd, yyyy);
}


void project_3() {

    #include <stdbool.h> // -> Palavras chave como bool, true e false não estão presentes na versão original do C

    /*
    Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
    (Older ISBNs use 10 digits.) The first group (the GS1 prefix) is currently either 978 or 979. 
    The group identifier specifies the language or country of origin (for example, 0 and 1 are used in English-speaking countries).
    The publisher code identifies the publisher (393 is the code for W. W. Norton). 
    The item number is assigned by the publisher to identify a specific book (97950 is the code for this book). 
    An ISBN ends with a check digit that's used to verify the accuracy of the preceding digits. Write a program that breaks down an ISBN entered by the user:  

    Enter ISBN: 978-0-393-97950-3
    GS1 prefix: 978
    Group identifier: 0
    Publisher code: 393
    Item number: 97950
    Check digit: 3  

    Note: The number of digits in each group may vary; you can't assume that groups have the lengths shown in this example.
    Test your program with actual ISBN values (usually found on the back cover of a book and on the copyright page).
    */

    int gtin_code, country_code, editor_code, pub_code, verify_code;
    bool gtin_val, country_val, editor_val, pub_val, verify_val, valid_isbn;

    gtin_val = country_val = editor_val = pub_val = verify_val = valid_isbn = true;
    
    printf("\n---- ISBN REGISTER ----");
    printf("\nEnter a ISBN code: ");
    scanf("%d-%d-%d-%d-%d", &gtin_code, &country_code, &editor_code, &pub_code, &verify_code);
    
    if (!(gtin_code == 978 || gtin_code == 979)) {
        valid_isbn = false;
    }

    if (!(country_code  >= 0 && country_code <= 99)) {
        valid_isbn = false;
    }

    if (!(editor_code >= 0 && editor_code <= 9999999)) {
        valid_isbn = false;
    }
    
    if (!(pub_code >= 0 && pub_code <= 999999)) {
        valid_isbn = false;
    }

    if (!(verify_code >= 0 && verify_code <= 10)) {
        valid_isbn = false;
    }

    if (valid_isbn == false) {
        
        do {
            valid_isbn = true;
            printf("Invalid ISBN, try again.");
            printf("\nEnter a ISBN code: ");
            scanf("%d-%d-%d-%d-%d", &gtin_code, &country_code, &editor_code, &pub_code, &verify_code);
            
            if (!(gtin_code == 978 || gtin_code == 979)) {
                valid_isbn = false;
            }

            if (!(country_code >= 0 && country_code <= 99)) {
                valid_isbn = false;
            }

            if (!(editor_code >= 0 && editor_code <= 9999999)) {
                valid_isbn = false;
            }
            
            if (!(pub_code >= 0 && pub_code <= 999999)) {
                valid_isbn = false;
            }

            if (!(verify_code >= 0 && verify_code <= 10)) {
                valid_isbn = false;
            }

        } while (valid_isbn == false);
        
        
    }

    printf("\nGS1 Prefix: %d", gtin_code);
    printf("\nGroup Identifier: %d", country_code);
    printf("\nPublisher Code: %d", pub_code);
    printf("\nItem number: %d", pub_code);
    printf("\nCheck Digit: %d", verify_code);

}

void project_4() {
    /*
        Write a program that asks the user to enter the numbers from 1 to 16 
        (in any order) and then displays the numbers in a 4 by 4 arrangement, 
        followed by the sums of the rows, columns, and diagonals.

        Example of execution:
        
        Enter the numbers from 1 to 16 in any order:
        16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

        16  3  2 13
        5 10 11  8
        9  6  7 12
        4 15 14  1

        Row sums: 34 34 34 34
        Column sums: 34 34 34 34
        Diagonal sums: 34 34
    */

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
    int r1, r2, r3, r4, c1, c2, c3, c4, d1, d2;
    
    printf("\nEnter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    r1 = n1 + n2 + n3 + n4;
    r2 = n5 + n6 + n7 + n8;
    r3 = n9 + n10 + n11 + n12;
    r4 = n13 + n14 + n15 + n16; 

    c1 = n1 + n5 + n9 + n12;
    c2 = n2 + n6 + n10 + n14;
    c3 = n3 + n7 + n11 + n15;
    c4 = n4 + n8 + n12 + n16;

    d1 = n1 + n6 + n11 + n16;
    d2 = n4 + n7 + n10 + n13;

    printf("\n%d  %d  %d  %d", n1, n2, n3, n4);
    printf("\n%d  %d  %d  %d", n5, n6, n7, n8);
    printf("\n%d  %d  %d  %d", n9, n10, n11, n12);
    printf("\n%d  %d  %d  %d\n", n13, n14, n15, n16);

    printf("\nRow sums: %d %d %d %d ", r1, r2, r3, r4);
    printf("\nColumn sums: %d %d %d %d ", c1, c2, c3, c4);
    printf("\nDiagonal sums: %d %d\n", d1, d2);
    
}

void test_3() {

    int gtin_code, country_code, editor_code, pub_code, verify_code;

    printf("\n---- ISBN REGISTER ----");
    printf("\nEnter a ISBN code: ");
    scanf("%d-%d-%d-%d-%d", &gtin_code, &country_code, &editor_code, &pub_code, &verify_code);
    
    printf("\nSEU ISBN: %d-%d-%d-%.2d-%d", gtin_code, country_code, editor_code, pub_code, verify_code);
}

int main() {
    project_4();
    
    return 0;
}
#include <iostream>
using namespace std;

char *check = new char[26];
int *char_count = new int[26]; 


void temp_char()
{
    int i,j = 0;
    for (i = 97; i <= 122; i++)
        {
            check[j++] = (char) i;
        }
}

int main()
{
    
    int i,sum;
    int k,j,l = 0;
    int flag = 0;
    
    char *nam = new char[1000];
    char ch;
    
    i = 0;
    //Input segment
    while(1)    
    {
        
        ch = getchar();
        if (ch != '\n')
            {
                 nam[i++] = ch;
                
            }
        else
                break;
    }
   	nam[i++] = '\0';
   	
   	//Create a list of smaller case letter
	temp_char();
	
    //Search each charector (find that frequency of each charectors in given sentence)
    for (j = 0; j < 26; j++)
        {
            for (k = 0; k < i; k++)
            {
                if (nam[k] == check[l] || nam[k] == check[l] - 32)
                    {
                        char_count[l++] = 1;
                        flag = 1;
                        break;
                    }
            }
            if (flag == 0) { l++;};
            flag = 0;
        }
    
    // Sum of total number of chars
    for (j = 0; j < 26; j++)
        {
                if (char_count[j] == 1 || char_count[j] == 0)
                	sum += char_count[j];
                else
                	continue;
        }
        
    system("cls");
    
    // condition cchecking
    if (sum >= 26)
        cout << "Pangram";
    else
        cout << "Not Pangram";
    
 	delete[] nam;
    delete[] check;
    delete [] char_count;
    
    return 0;
}


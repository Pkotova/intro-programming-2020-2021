#include<iostream>

using namespace std;

void toUpper(char * str)
{
    int i = 0;
    while( str[i]!= '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;       
    }
}

void add(char * str, int * bucket)
{
    int  i = 0;
    int index = 0;
    while ( str[i] != '\0')
    {
        if(str[i] <= 'A' && str[i] >= 'Z')
        {
             i++;
            continue;
        }
        else
        {
            index = str[i] - 'A';
            bucket[index] += 1;
            i++;
        }      
    }
}

void remove(char * str, int * bucket)
{
    int  i = 0;
    int index = 0;
    
    while ( str[i] != '\0')
    {
        if( str[i] <= 'A' && str[i] >= 'Z')
        {
            i++;
            continue;
        }
        else
        {
            index = str[i] - 'A';
            bucket[index] -= 1;
            i++;
        }          
    }
}

bool areTheSame(int *array)
{
    for (int i = 0; i < 26; i++)
    {
        if(array[i] != 0)
        {
            return false;
        }
    }
 return true;        
}

int main()
{
    int buckets[26] =  { 0 };
    //При използване на '#' се чупи, нз що.. :/
    char sentence[128] = "Astr@$%$ o";
    char sentence2[128] = "tr$%o AS";

    toUpper(sentence);
    toUpper(sentence2);

    add(sentence, buckets);
    remove(sentence2, buckets);  
    
    cout << boolalpha <<  areTheSame(buckets);
}
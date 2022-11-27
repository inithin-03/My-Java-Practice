class Solution{
public:	
	string addBinary(string A, string B)
	{
	   if(A.length()>B.length())
	         return addBinary(B,A);
	    
	    int diffinbits = B.length()-A.length(); 
	    
	    string x;
	    for(int i=0;i<diffinbits;i++)
	    x+='0';
	    
	    A=x+A; char carry='0';
	    string result;
	    for(int i = A.length()-1;i>=0;i--)
	    {
	        if(A[i]=='1' && B[i]=='1')
	        {
	            if(carry=='1')
	            {
	                result=result+'1'; carry='1';
	            }
	            else
	            {
	                result=result+'0'; carry='1';
	            }
	        }
	        
	        else if(A[i]=='0' && B[i]=='0')
	        {
	            if(carry=='0')
	            {
	                result=result+'0'; carry='0';
	            }
	            else
	            {
	                result=result+'1'; carry='0';
	            }
	        }
	        
	        else if(A[i] != B[i])
	        {
	            if(carry=='1')
	            {
	                result=result+'0'; carry='1';
	            }
	            else
	            {
	                result=result+'1'; carry='0';
	            }
	        }
	    }
	    
	    if(carry=='1')
	    result=result+carry;
	    
	    reverse(result.begin(),result.end());
	    
	    int i = 0;
    while (i + 1 < result.length() && result[i] == '0')
        i++;
    return (result.substr(i));
	}
};

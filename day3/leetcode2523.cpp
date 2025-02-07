class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
        vector<int> primes; 
        vector<int> is_prime(right + 1, true);
    
        is_prime[0] = is_prime[1] = false;
        
        for (int i = 2; i * i <= right; i++) {
            if (is_prime[i]) {
                for (int j = 2; j*i<= right; j++) {
                    is_prime[j*i] = false;
                }
            }
        }
    
        for (int i = left; i <= right; i++) {
            if (is_prime[i]) {
                primes.push_back(i);
            }
        }
    
        int min=INT_MAX;
        vector<int>pair(2);
        for(int i=1;i<primes.size();i++)
        {  if(min>(primes[i]-primes[i-1]))
             {min=primes[i]-primes[i-1];
             pair[0]=primes[i-1];
             pair[1]=primes[i];
             }
    
        }
       for(int i:pair)
       cout<<i<<" "; 
        
      if(pair[0]>=1) return pair;
      else
      return {-1,-1};
    
    
    
     
    
        }
    };
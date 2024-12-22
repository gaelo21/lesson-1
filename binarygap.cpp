int solution(int N) {
    // Implement your solution here
    string arr("");
    while(N != 0){
        arr += (N % 2 == 0) ? '0' : '1';
        N /= 2;
    }
    int res = 0, max = 0, begin = 0;
    for(size_t i = 0; i < arr.size(); ++i){
        if(arr[i] == '0' && begin == 0){
            continue;
        }
        else if(arr[i] == '1' && begin == 0){
            begin = 1;
            res = 0;
        }
        else if(arr[i] == '0' && begin == 1){
            res++;
        }
        else if(arr[i] == '1' && begin == 1){
            max = (res > max) ? res : max;
            res = 0;
        }
        
    }

    return max;
}

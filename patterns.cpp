void nForest(int n) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void nForest(int n) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void nTriangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void triangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void seeding(int n) {
	// Write your code here.
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){      //spaces
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){      //stars
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++) {       // spaces
            cout<<" ";
        }
        cout << endl;
    }
}

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void nStarDiamond(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void nBinaryTriangle(int n) {
    // Write your code here.
    int start = 1;
    for(int i = 0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

void numberCrown(int n) {
    // Write your code here.
    int spaces = 2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        spaces-=2;
    }
}

void nNumberTriangle(int n) {
    // Write your code here.
    int start =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void alphaRamp(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void alphaHill(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch ='A';
        int point = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch<<" ";

            if(j<=point) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void alphaTriangle(int n) {
    // Write your code here.
    for(int i=0;i<=n;i++){
        char start = 'A'+n-1;
        for(int j=0;j<i;j++){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }
}

void getStarPattern(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

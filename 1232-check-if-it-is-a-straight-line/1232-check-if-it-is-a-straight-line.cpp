/*class Solution {
public:
//this logic mainly work on only positive numbers.
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size=coordinates.size();
        int x=abs(coordinates[1][0]-coordinates[0][0]);
        int y=abs(coordinates[1][1]-coordinates[0][1]);
        
        int x1,y1;
        for(int i=2;i<size;i++){
            x1=abs(coordinates[i][0]-coordinates[i-1][0]);
            y1=abs(coordinates[i][1]-coordinates[i-1][1]);
            if(x*y1!=y*x1)
                return false;
        }
        return true;
    }
};*/
class Solution {
public:
	bool checkStraightLine(vector<vector<int>>& coordinates) {
		if(coordinates.size() <= 2){
			return true;
		}
		int x1 = coordinates[0][0];
		int y1 = coordinates[0][1];
		int x2 = coordinates[1][0];
		int y2 = coordinates[1][1];
		for(int i = 2; i < coordinates.size(); i++){
			int x3 = coordinates[i][0];
			int y3 = coordinates[i][1];
			
			if(y1*(x3 - x2) + y2*(x1 - x3) + y3*(x2 - x1) != 0){   
				return false;
			}
		}
		return true;        
	}
};
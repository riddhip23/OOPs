string month(string& s){
	string ans;
	if(s == "Jan")
		ans = "01";
	if(s == "Feb")
		ans = "02";
	if(s == "Mar")
		ans = "03";
	if(s == "Apr")
		ans = "04";
	if(s == "May")
		ans = "05";
	if(s == "Jun")
		ans = "06";
	if(s == "Jul")
		ans = "07";
	if(s == "Aug")
		ans = "08";
	if(s == "Sep")
		ans = "09";
	if(s == "Oct")
		ans = "10";
	if(s == "Nov")
		ans = "11";
	if(s == "Dec")
		ans = "12";
	return ans;
}

vector<string> p(vector<string> &dates){
	vector<string> ans;
	int n = (int)dates.size();
	for(int i=0; i<n; i++){
		string dd = "", mm, yy;
		for(int j=0; j<4; j++){
			if(dates[i][j] >= '0' && dates[i][j] <= '9'){
				dd += dates[i][j];
			}
			else
				break;
		}
		int j;
		if(dd.length() == 1){
			j = 4;
		}
		else
			j = 5;
		mm = dates[i].substr(j,3);
		mm = month(mm);
		if(dd.length() == 1){
			dd = '0' + dd;
		}
		j = (int)dates[i].length() - 4;
		yy = dates[i].substr(j,4);
		string temp = "";
		temp = temp + yy + '-' + mm + '-' + dd;
		ans.push_back(temp); 
	}
	return ans;
}
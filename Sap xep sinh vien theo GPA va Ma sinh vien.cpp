#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
class SinhVien {
	public:
		string idSv = "SV";
		string nameSv;
		string dobSv;
		float gpa;
		string majorSv;
		
	friend istream& operator >> (istream& in, SinhVien& a) {
		if (cnt < 10)
			a.idSv += "00" + to_string(cnt);
		else if (cnt < 100)
			a.idSv += "0" + to_string(cnt);
		else
			a.idSv += to_string(cnt);
		++cnt;
		
		in.ignore();
		getline(in, a.nameSv);
		cin >> a.majorSv >> a.dobSv >> a.gpa;
		
		string token, ans = "";
		stringstream ss(a.nameSv);
		
		while (ss >> token) {
			token[0] = toupper(token[0]);
			for (int i = 1; i < token.size(); ++i) {
				token[i] = tolower(token[i]);
			}
			ans += token + " ";
		}
		ans.pop_back();
		a.nameSv = ans;
		
		if (a.dobSv[2] != '/')
			a.dobSv = "0" + a.dobSv;
		if (a.dobSv[5] != '/')
			a.dobSv = a.dobSv.insert(3, "0");
		
		return in;
	}
	
	friend ostream& operator << (ostream& out, SinhVien a) {
		out << a.idSv << " " << a.nameSv << " " << a.majorSv << " " << a.dobSv << " " << fixed << setprecision(2) << a.gpa << "\n";
		return out;
	}
	
};

bool cmp(SinhVien a, SinhVien b) {
	if (a.gpa == b.gpa)
		return a.idSv < b.idSv;
	return a.gpa > b.gpa;
}

int main() {
	int n;
	cin >> n;
	
	SinhVien a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	
	for (int i = 0; i < n; ++i) {
		cout << a[i];
	}

	return 0;
}

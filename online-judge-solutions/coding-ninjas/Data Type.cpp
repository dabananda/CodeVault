int dataTypes(string type) {
	string s = type;
	if (s == "Integer") return 4;
	else if (s == "Long") return 8;
	else if (s == "Float") return 4;
	else if (s == "Double") return 8;
	else return 1;
}

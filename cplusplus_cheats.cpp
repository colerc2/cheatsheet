//read file and store each line in a vector of strings
void read_file_to_vector(std::vector<std::string> &lines, std::string filename){
  std::string item;
  std::ifstream file(filename.c_str());
  while(std::getline(file, item, '\n')){
    lines.push_back(item);
  }
}

//split a string by a specified delimiter into a vector of doubles
void split_to_double(const std::string &s, char delim, std::vector<double> &elements){
  std::stringstream ss(s);
  std::string item;
  while(std::getline(ss,item,delim)){
    elements.push_back(atof(item.c_str()));
  }
}

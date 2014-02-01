//read file and store each line in a vector of strings
void read_file_to_vector(std::vector<std::string> &lines, std::string filename){
  std::string item;
  std::ifstream file(filename.c_str());
  while(std::getline(file, item, '\n')){
    lines.push_back(item);
  }
}

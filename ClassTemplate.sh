#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <ClassName>"
    exit 1
fi

CLASS_NAME=$1
HEADER_FILE="${CLASS_NAME}.hpp"
IMPLEMENTATION_FILE="${CLASS_NAME}.cpp"

# Check if the files already exist
if [ -e "$HEADER_FILE" ] || [ -e "$IMPLEMENTATION_FILE" ]; then
    echo "Error: Files with the specified class name already exist."
    exit 1
fi

# Create the header file
echo "#ifndef ${CLASS_NAME}_HPP" > "$HEADER_FILE"
echo "# define ${CLASS_NAME}_HPP" >> "$HEADER_FILE"
echo "" >> "$HEADER_FILE"
echo '#include <iostream>' >> "$HEADER_FILE"
echo '#include <string>' >> "$HEADER_FILE"
echo "" >> "$HEADER_FILE"
echo "class $CLASS_NAME" >> "$HEADER_FILE"
echo "{" >> "$HEADER_FILE"
echo "public:" >> "$HEADER_FILE"
echo "	$CLASS_NAME(void);" >> "$HEADER_FILE"
echo "	$CLASS_NAME(std::string name);" >> "$HEADER_FILE"
echo "	$CLASS_NAME(const $CLASS_NAME &c);" >> "$HEADER_FILE"
echo "	$CLASS_NAME &operator=(const $CLASS_NAME &c);" >> "$HEADER_FILE"
echo "	~$CLASS_NAME(void);" >> "$HEADER_FILE"
echo "" >> "$HEADER_FILE"
echo "protected:" >> "$HEADER_FILE"
echo "" >> "$HEADER_FILE"
echo "};" >> "$HEADER_FILE"
echo "" >> "$HEADER_FILE"
echo "#endif" >> "$HEADER_FILE"
echo "" >> "$HEADER_FILE"



# Create the implementation file
echo "#include \"$HEADER_FILE\"" > "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "$CLASS_NAME::$CLASS_NAME(void)" >> "$IMPLEMENTATION_FILE"
echo "{" >> "$IMPLEMENTATION_FILE"
echo '	std::cout << "'"${CLASS_NAME}"' class default constructor called" << std::endl;' >> "$IMPLEMENTATION_FILE"
echo "}" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "$CLASS_NAME::$CLASS_NAME(std::string name)" >> "$IMPLEMENTATION_FILE"
echo "{" >> "$IMPLEMENTATION_FILE"
echo '	std::cout << "'"${CLASS_NAME}"' class string constructor called" << std::endl;' >> "$IMPLEMENTATION_FILE"
echo "}" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "$CLASS_NAME::$CLASS_NAME(const $CLASS_NAME &c)" >> "$IMPLEMENTATION_FILE"
echo "{" >> "$IMPLEMENTATION_FILE"
echo '	std::cout << "'"${CLASS_NAME}"' class copy constructor called" << std::endl;' >> "$IMPLEMENTATION_FILE"
echo '	if (this != &c)' >> "$IMPLEMENTATION_FILE"
echo "	{" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "	}" >> "$IMPLEMENTATION_FILE"
echo "}" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "$CLASS_NAME &$CLASS_NAME::operator=(const $CLASS_NAME &c)" >> "$IMPLEMENTATION_FILE"
echo "{" >> "$IMPLEMENTATION_FILE"
echo '	std::cout << "'"${CLASS_NAME}"' class copy assignment operator called" << std::endl;' >> "$IMPLEMENTATION_FILE"
echo '	if (this != &c)' >> "$IMPLEMENTATION_FILE"
echo "	{" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "	}" >> "$IMPLEMENTATION_FILE"
echo '	return *this;' >> "$IMPLEMENTATION_FILE"
echo "}" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"
echo "$CLASS_NAME::~$CLASS_NAME()" >> "$IMPLEMENTATION_FILE"
echo "{" >> "$IMPLEMENTATION_FILE"
echo '	std::cout << "'"${CLASS_NAME}"' destructor called" << std::endl;' >> "$IMPLEMENTATION_FILE"
echo "}" >> "$IMPLEMENTATION_FILE"
echo "" >> "$IMPLEMENTATION_FILE"

echo "Class template for $CLASS_NAME created successfully!"

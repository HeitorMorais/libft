char *ft_strchr(char *s, int c){
	char *p;

	while(*s){
		if(*s == c){
			p = s;
			return p;
		}
		s++;
	}
	if(c == 0) {
		p = s;
	} else {
		p = '\0';
	}
	return p;
}

int main(){
	#include <unistd.h>
	char buffer[6] = "abcde";
	write(1, ft_strchr(buffer, 'c'), 1);
}

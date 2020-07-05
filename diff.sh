ls -R ./obj | sed -E 's\.o$\.c\' > diff_obj
ls -R ./src > diff_src

diff diff_src diff_obj | grep -E "^[<>]\s\w" > compile_diff 
rm diff_obj diff_src
grep -R -P -h -r -l "^[a-z0-9_]*[ \t]*[a-z0-9_*]*[(][a-z0-9*,_ ]*[)]$" ./src | rev | cut -d "/" -f 1 | rev > files
diff files files_old | grep "<" | sed 's\< \\' | sed 's;\.c;\.c \\;' > file_changes
mv ./files files_old

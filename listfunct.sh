grep -R -P -h -r "^[a-z0-9_]*[ \t]*[a-z0-9_*]*[(][a-z0-9*,_ ]*[)]$" ./src | sed "s/)/);/" > prototypes
diff prototypes prototypes_old | grep "<" | sed 's\< \\' > prototype_changes
mv ./prototypes prototypes_old

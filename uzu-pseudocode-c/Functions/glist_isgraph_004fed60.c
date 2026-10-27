// Function : glist_isgraph
// Namespace: 
// Entry    : 004fed60
// Prototype: byte glist_isgraph(long param_1)
// Body     : 004fed60 - 004fed6a


byte glist_isgraph(long param_1)

{
  return *(byte *)(param_1 + 0xe9) & 3;
}



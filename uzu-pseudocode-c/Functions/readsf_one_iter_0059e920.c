// Function : readsf_one_iter
// Namespace: 
// Entry    : 0059e920
// Prototype: undefined8 readsf_one_iter(char * param_1, long param_2)
// Body     : 0059e920 - 0059e942


undefined8 readsf_one_iter(char *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = namelist_append(*(undefined8 **)(param_2 + 0x378),param_1,0);
  *(undefined8 **)(param_2 + 0x378) = puVar1;
  return 1;
}



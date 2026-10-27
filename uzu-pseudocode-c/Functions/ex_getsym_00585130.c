// Function : ex_getsym
// Namespace: 
// Entry    : 00585130
// Prototype: undefined8 ex_getsym(char * param_1, undefined8 * param_2)
// Body     : 00585130 - 0058513f


undefined8 ex_getsym(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = gensym(param_1);
  *param_2 = puVar1;
  return 0;
}



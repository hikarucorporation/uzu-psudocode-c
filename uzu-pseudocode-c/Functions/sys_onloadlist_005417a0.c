// Function : sys_onloadlist
// Namespace: 
// Entry    : 005417a0
// Prototype: undefined8 sys_onloadlist(char * param_1)
// Body     : 005417a0 - 005417d6


undefined8 sys_onloadlist(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = gensym(param_1);
  puVar1 = sys_loaded;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if ((undefined8 *)puVar1[1] == puVar2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return 1;
}



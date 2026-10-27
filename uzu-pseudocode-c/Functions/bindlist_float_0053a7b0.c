// Function : bindlist_float
// Namespace: 
// Entry    : 0053a7b0
// Prototype: undefined bindlist_float(undefined4 param_1, long param_2)
// Body     : 0053a7b0 - 0053a80c


void bindlist_float(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_pd_objectmaker_00715510;
  puVar2 = *(undefined8 **)(param_2 + 8);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    while ((long *)*puVar2 != (long *)puVar1) {
      (**(code **)(*(long *)*puVar2 + 0x48))(param_1);
      puVar2 = (undefined8 *)puVar2[1];
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    (**(code **)(*(long *)puVar1 + 0x48))(param_1,puVar1);
    puVar2 = (undefined8 *)puVar2[1];
  } while( true );
}



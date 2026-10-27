// Function : pdsymbol_symbol
// Namespace: 
// Entry    : 0054b970
// Prototype: undefined pdsymbol_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10)
// Body     : 0054b970 - 0054b97f


void pdsymbol_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10)

{
  *(undefined8 *)(param_9 + 0x30) = param_10;
  outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
  return;
}



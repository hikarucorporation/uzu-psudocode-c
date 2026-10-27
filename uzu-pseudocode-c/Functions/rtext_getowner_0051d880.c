// Function : rtext_getowner
// Namespace: 
// Entry    : 0051d880
// Prototype: undefined8 rtext_getowner(long param_1)
// Body     : 0051d880 - 0051d884


undefined8 rtext_getowner(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



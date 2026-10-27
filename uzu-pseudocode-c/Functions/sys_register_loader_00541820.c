// Function : sys_register_loader
// Namespace: 
// Entry    : 00541820
// Prototype: undefined sys_register_loader(undefined * param_1)
// Body     : 00541820 - 00541861


void sys_register_loader(undefined *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  ppuVar1 = &loaders;
  do {
    ppuVar2 = ppuVar1;
    if (*ppuVar2 == param_1) {
      return;
    }
    ppuVar1 = (undefined **)ppuVar2[1];
  } while ((undefined **)ppuVar2[1] != (undefined **)0x0);
  puVar3 = getbytes(0x10);
  ppuVar2[1] = (undefined *)puVar3;
  *puVar3 = param_1;
  puVar3[1] = 0;
  return;
}



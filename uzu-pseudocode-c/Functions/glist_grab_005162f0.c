// Function : glist_grab
// Namespace: 
// Entry    : 005162f0
// Prototype: undefined glist_grab(long param_1, undefined8 param_2, long param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6)
// Body     : 005162f0 - 00516367


void glist_grab(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined4 param_5,
               undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  do {
    lVar3 = param_1;
    if (*(long *)(lVar3 + 0x48) == 0) break;
    param_1 = *(long *)(lVar3 + 0x48);
  } while ((*(ushort *)(lVar3 + 0xe8) & 0x901) == 0x100);
  bVar1 = *(byte *)(*(long *)(lVar3 + 0xc0) + 0x88) & 0xf8;
  bVar2 = bVar1 + 4;
  if (param_3 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(*(long *)(lVar3 + 0xc0) + 0x88) = bVar2;
  lVar3 = *(long *)(lVar3 + 0xc0);
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  *(long *)(lVar3 + 0x38) = param_3;
  *(undefined8 *)(lVar3 + 0x40) = param_4;
  *(undefined4 *)(lVar3 + 0x68) = param_5;
  *(undefined4 *)(lVar3 + 0x6c) = param_6;
  return;
}



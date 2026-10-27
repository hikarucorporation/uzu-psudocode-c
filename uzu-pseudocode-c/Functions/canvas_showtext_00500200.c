// Function : canvas_showtext
// Namespace: 
// Entry    : 00500200
// Prototype: bool canvas_showtext(long param_1)
// Body     : 00500200 - 0050025e


bool canvas_showtext(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  bVar6 = true;
  if (*(long *)(param_1 + 0x10) != 0) {
    piVar4 = (int *)binbuf_getvec(*(long *)(param_1 + 0x10));
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
      iVar3 = binbuf_getnatom(*(undefined4 **)(param_1 + 0x10));
      if ((iVar3 != 0) && (*piVar4 == 2)) {
        puVar1 = *(undefined8 **)(piVar4 + 2);
        puVar5 = gensym("graph");
        bVar6 = puVar1 != puVar5;
      }
    }
  }
  bVar2 = false;
  if ((*(byte *)(param_1 + 0xe9) & 2) == 0) {
    bVar2 = bVar6;
  }
  return bVar2;
}



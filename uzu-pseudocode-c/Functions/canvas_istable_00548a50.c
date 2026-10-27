// Function : canvas_istable
// Namespace: 
// Entry    : 00548a50
// Prototype: bool canvas_istable(long param_1)
// Body     : 00548a50 - 00548aa1


bool canvas_istable(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  bVar5 = false;
  if (*(long *)(param_1 + 0x10) != 0) {
    piVar3 = (int *)binbuf_getvec(*(long *)(param_1 + 0x10));
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
      iVar2 = binbuf_getnatom(*(undefined4 **)(param_1 + 0x10));
      if ((iVar2 != 0) && (*piVar3 == 2)) {
        puVar1 = *(undefined8 **)(piVar3 + 2);
        puVar4 = gensym("table");
        bVar5 = puVar1 == puVar4;
      }
    }
  }
  return bVar5;
}



// Function : self_destruct
// Namespace: juce:jpeglibNamespace
// Entry    : 00377550
// Prototype: undefined self_destruct(long * param_1)
// Body     : 00377550 - 0037761c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::self_destruct(juce::jpeglibNamespace::jpeg_common_struct*) */

void __cdecl juce::jpeglibNamespace::self_destruct(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  free_pool(param_1,1);
  lVar1 = param_1[1];
  puVar2 = *(undefined8 **)(lVar1 + 0x78);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar4 = puVar2[1];
    lVar5 = puVar2[2];
    free(puVar2);
    *(long *)(lVar1 + 0x98) = (*(long *)(lVar1 + 0x98) - (lVar4 + lVar5)) + -0x18;
    puVar2 = puVar3;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x68) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar4 = puVar2[1];
    lVar5 = puVar2[2];
    free(puVar2);
    *(long *)(lVar1 + 0x98) = (*(long *)(lVar1 + 0x98) - (lVar4 + lVar5)) + -0x18;
    puVar2 = puVar3;
  }
  free((void *)param_1[1]);
  param_1[1] = 0;
  return;
}



// Function : toStdString[abi:cxx11]
// Namespace: juce:String
// Entry    : 004a8de0
// Prototype: long * toStdString[abi:cxx11](long * param_1, undefined8 * param_2)
// Body     : 004a8de0 - 004a9056


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::toStdString[abi:cxx11]() const */

long * __cdecl juce::String::toStdString_abi_cxx11_(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  puVar3 = (undefined1 *)*param_2;
  plVar7 = param_1 + 2;
  *param_1 = (long)plVar7;
  if (puVar3 == (undefined1 *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_004a904b:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  uVar1 = 0xffffffffffffffff;
  do {
    uVar8 = uVar1;
    uVar1 = uVar8 + 1;
  } while (puVar3[uVar8 + 1] != '\0');
  if (uVar1 < 0x10) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    if ((long)uVar1 < 0) goto LAB_004a904b;
    plVar7 = operator_new(uVar8 + 2);
    *param_1 = (long)plVar7;
    param_1[2] = uVar1;
  }
  if (uVar1 == 1) {
    *(undefined1 *)plVar7 = *puVar3;
    goto LAB_004a8ef2;
  }
  if (uVar1 == 0) goto LAB_004a8ef2;
  if ((uVar1 < 8) || ((plVar7 < puVar3 + uVar1 && (puVar3 < (undefined1 *)((long)plVar7 + uVar1)))))
  {
    uVar8 = 0;
LAB_004a8e84:
    uVar11 = ~uVar8;
    if ((uVar1 & 3) != 0) {
      uVar9 = (ulong)((uint)uVar1 & 3);
      do {
        *(undefined1 *)((long)plVar7 + uVar8) = puVar3[uVar8];
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (2 < uVar11 + uVar1) {
      do {
        *(undefined1 *)((long)plVar7 + uVar8) = puVar3[uVar8];
        *(undefined1 *)((long)plVar7 + uVar8 + 1) = puVar3[uVar8 + 1];
        *(undefined1 *)((long)plVar7 + uVar8 + 2) = puVar3[uVar8 + 2];
        *(undefined1 *)((long)plVar7 + uVar8 + 3) = puVar3[uVar8 + 3];
        uVar8 = uVar8 + 4;
      } while (uVar1 != uVar8);
    }
  }
  else if (uVar1 < 0x20) {
    uVar11 = 0;
LAB_004a900f:
    uVar8 = uVar1 & 0xfffffffffffffff8;
    do {
      *(undefined8 *)((long)plVar7 + uVar11) = *(undefined8 *)(puVar3 + uVar11);
      uVar11 = uVar11 + 8;
    } while (uVar8 != uVar11);
    if (uVar1 != uVar8) goto LAB_004a8e84;
  }
  else {
    uVar8 = uVar1 & 0xffffffffffffffe0;
    if (uVar8 - 0x20 < 0x60) {
      lVar10 = 0;
    }
    else {
      uVar11 = ((uVar1 & 0xffffffffffffffe0) - 0x20 >> 5) + 1 & 0xfffffffffffffffc;
      lVar10 = 0;
      do {
        uVar4 = *(undefined8 *)((long)(puVar3 + lVar10) + 8);
        uVar5 = *(undefined8 *)(puVar3 + lVar10 + 0x10);
        uVar6 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x10) + 8);
        *(undefined8 *)((long)plVar7 + lVar10) = *(undefined8 *)(puVar3 + lVar10);
        ((undefined8 *)((long)plVar7 + lVar10))[1] = uVar4;
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar4 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x20) + 8);
        uVar5 = *(undefined8 *)(puVar3 + lVar10 + 0x30);
        uVar6 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x30) + 8);
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x20);
        *puVar2 = *(undefined8 *)(puVar3 + lVar10 + 0x20);
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x30);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar4 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x40) + 8);
        uVar5 = *(undefined8 *)(puVar3 + lVar10 + 0x50);
        uVar6 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x50) + 8);
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x40);
        *puVar2 = *(undefined8 *)(puVar3 + lVar10 + 0x40);
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x50);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar4 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x60) + 8);
        uVar5 = *(undefined8 *)(puVar3 + lVar10 + 0x70);
        uVar6 = *(undefined8 *)((long)(puVar3 + lVar10 + 0x70) + 8);
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x60);
        *puVar2 = *(undefined8 *)(puVar3 + lVar10 + 0x60);
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)((long)plVar7 + lVar10 + 0x70);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        lVar10 = lVar10 + 0x80;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
    }
    if (((uVar8 - 0x20 >> 5) + 1 & 3) != 0) {
      lVar12 = 0;
      do {
        uVar4 = *(undefined8 *)((long)(puVar3 + lVar12 + lVar10) + 8);
        uVar5 = *(undefined8 *)(puVar3 + lVar12 + lVar10 + 0x10);
        uVar6 = *(undefined8 *)((long)(puVar3 + lVar12 + lVar10 + 0x10) + 8);
        puVar2 = (undefined8 *)((long)plVar7 + lVar12 + lVar10);
        *puVar2 = *(undefined8 *)(puVar3 + lVar12 + lVar10);
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)((long)plVar7 + lVar12 + lVar10 + 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        lVar12 = lVar12 + 0x20;
      } while ((ulong)((byte)(((byte)(((byte)uVar1 & 0x60) - 0x20) >> 5) + 1) & 3) * 0x20 != lVar12)
      ;
    }
    if (uVar1 != uVar8) {
      uVar11 = uVar8;
      if ((uVar1 & 0x18) == 0) goto LAB_004a8e84;
      goto LAB_004a900f;
    }
  }
  plVar7 = (long *)*param_1;
LAB_004a8ef2:
  param_1[1] = uVar1;
  *(undefined1 *)((long)plVar7 + uVar1) = 0;
  return param_1;
}



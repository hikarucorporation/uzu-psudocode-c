// Function : pdinstance_init
// Namespace: 
// Entry    : 00534460
// Prototype: undefined pdinstance_init(undefined8 * param_1)
// Body     : 00534460 - 00534b0f


void pdinstance_init(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = getbytes(0x20000);
  param_1[5] = puVar2;
  *puVar2 = 0;
  lVar3 = 0;
  do {
    *(undefined8 *)(param_1[5] + 8 + lVar3 * 8) = 0;
    *(undefined8 *)(param_1[5] + 0x10 + lVar3 * 8) = 0;
    *(undefined8 *)(param_1[5] + 0x18 + lVar3 * 8) = 0;
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x3fff);
  lVar3 = param_1[5];
  puVar2 = *(undefined8 **)(lVar3 + 0x14930);
  if (*(undefined8 **)(lVar3 + 0x14930) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x14930);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"pointer");
      if (iVar1 == 0) goto LAB_0053453d;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar2 = getbytes(8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *puVar2 = 0x7265746e696f70;
  param_1[0xc] = puVar2;
  *plVar8 = (long)(param_1 + 0xc);
  lVar3 = param_1[5];
LAB_0053453d:
  puVar2 = *(undefined8 **)(lVar3 + 0x10cd8);
  if (*(undefined8 **)(lVar3 + 0x10cd8) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x10cd8);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"float");
      if (iVar1 == 0) goto LAB_005345af;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar4 = getbytes(6);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *puVar4 = 0x616f6c66;
  *(undefined2 *)(puVar4 + 1) = 0x74;
  param_1[0xf] = puVar4;
  *plVar8 = (long)(param_1 + 0xf);
  lVar3 = param_1[5];
LAB_005345af:
  puVar2 = *(undefined8 **)(lVar3 + 0x77d8);
  if (*(undefined8 **)(lVar3 + 0x77d8) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x77d8);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"symbol");
      if (iVar1 == 0) goto LAB_00534636;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar4 = getbytes(7);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *puVar4 = 0x626d7973;
  *(undefined4 *)((long)puVar4 + 3) = 0x6c6f62;
  param_1[0x12] = puVar4;
  *plVar8 = (long)(param_1 + 0x12);
  lVar3 = param_1[5];
LAB_00534636:
  puVar2 = *(undefined8 **)(lVar3 + 0x1bee8);
  if (*(undefined8 **)(lVar3 + 0x1bee8) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x1bee8);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"bang");
      if (iVar1 == 0) goto LAB_005346b3;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar4 = getbytes(5);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *puVar4 = 0x676e6162;
  *(undefined1 *)(puVar4 + 1) = 0;
  param_1[0x15] = puVar4;
  *plVar8 = (long)(param_1 + 0x15);
  lVar3 = param_1[5];
LAB_005346b3:
  puVar2 = *(undefined8 **)(lVar3 + 0xb308);
  if (*(undefined8 **)(lVar3 + 0xb308) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0xb308);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"list");
      if (iVar1 == 0) goto LAB_00534733;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar4 = getbytes(5);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *puVar4 = 0x7473696c;
  *(undefined1 *)(puVar4 + 1) = 0;
  param_1[0x18] = puVar4;
  *plVar8 = (long)(param_1 + 0x18);
  lVar3 = param_1[5];
LAB_00534733:
  puVar2 = *(undefined8 **)(lVar3 + 0x18b38);
  if (*(undefined8 **)(lVar3 + 0x18b38) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x18b38);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"anything");
      if (iVar1 == 0) goto LAB_005347ba;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar2 = getbytes(9);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *puVar2 = 0x676e696874796e61;
  *(undefined1 *)(puVar2 + 1) = 0;
  param_1[0x1b] = puVar2;
  *plVar8 = (long)(param_1 + 0x1b);
  lVar3 = param_1[5];
LAB_005347ba:
  puVar2 = *(undefined8 **)(lVar3 + 0x16f18);
  if (*(undefined8 **)(lVar3 + 0x16f18) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x16f18);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"signal");
      if (iVar1 == 0) goto LAB_00534836;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar4 = getbytes(7);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *puVar4 = 0x6e676973;
  *(undefined4 *)((long)puVar4 + 3) = 0x6c616e;
  param_1[0x1e] = puVar4;
  *plVar8 = (long)(param_1 + 0x1e);
  lVar3 = param_1[5];
LAB_00534836:
  puVar2 = *(undefined8 **)(lVar3 + 0x178b0);
  if (*(undefined8 **)(lVar3 + 0x178b0) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x178b0);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"#N");
      if (iVar1 == 0) goto LAB_005348b2;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar5 = getbytes(3);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *puVar5 = 0x4e23;
  *(undefined1 *)(puVar5 + 1) = 0;
  param_1[0x21] = puVar5;
  *plVar8 = (long)(param_1 + 0x21);
  lVar3 = param_1[5];
LAB_005348b2:
  puVar2 = *(undefined8 **)(lVar3 + 0x17900);
  if (*(undefined8 **)(lVar3 + 0x17900) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x17900);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"#X");
      if (iVar1 == 0) goto LAB_00534932;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar5 = getbytes(3);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *puVar5 = 0x5823;
  *(undefined1 *)(puVar5 + 1) = 0;
  param_1[0x24] = puVar5;
  *plVar8 = (long)(param_1 + 0x24);
  lVar3 = param_1[5];
LAB_00534932:
  puVar2 = *(undefined8 **)(lVar3 + 0x1b0e8);
  if (*(undefined8 **)(lVar3 + 0x1b0e8) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x1b0e8);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"x");
      if (iVar1 == 0) goto LAB_005349ae;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar5 = getbytes(2);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *puVar5 = 0x78;
  param_1[0x27] = puVar5;
  *plVar8 = (long)(param_1 + 0x27);
  lVar3 = param_1[5];
LAB_005349ae:
  puVar2 = *(undefined8 **)(lVar3 + 0x1b0f0);
  if (*(undefined8 **)(lVar3 + 0x1b0f0) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0x1b0f0);
  }
  else {
    do {
      puVar6 = puVar2;
      iVar1 = strcmp((char *)*puVar6,"y");
      if (iVar1 == 0) goto LAB_00534a2e;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar5 = getbytes(2);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *puVar5 = 0x79;
  param_1[0x2a] = puVar5;
  *plVar8 = (long)(param_1 + 0x2a);
  lVar3 = param_1[5];
LAB_00534a2e:
  puVar2 = *(undefined8 **)(lVar3 + 0xa828);
  if (*(undefined8 **)(lVar3 + 0xa828) == (undefined8 *)0x0) {
    plVar8 = (long *)(lVar3 + 0xa828);
  }
  else {
    do {
      puVar6 = puVar2;
      if (*(char *)*puVar6 == '\0') goto LAB_00534a8d;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    plVar8 = puVar6 + 2;
  }
  puVar7 = getbytes(1);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *puVar7 = 0;
  param_1[0x2d] = puVar7;
  *plVar8 = (long)(param_1 + 0x2d);
LAB_00534a8d:
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  *plVar8 = (long)param_1;
  x_midi_newpdinstance();
  g_canvas_newpdinstance();
  d_ugen_newpdinstance();
  puVar2 = getbytes(0x68);
  lVar3 = *plVar8;
  *(undefined8 **)(lVar3 + 0x50) = puVar2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  lVar3 = *(long *)(lVar3 + 0x50);
  *(undefined8 *)(lVar3 + 0x28) = 0x4000000040;
  *(undefined4 *)(lVar3 + 0x30) = 0x473b8000;
  *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)PTR_sys_printhook_00715850;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  return;
}



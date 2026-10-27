// Function : setPosition
// Namespace: juce:GZIPDecompressorInputStream
// Entry    : 004bde50
// Prototype: undefined8 setPosition(GZIPDecompressorInputStream * this, long param_1)
// Body     : 004bde50 - 004bdfee


/* juce::GZIPDecompressorInputStream::setPosition(long long) */

undefined8 __thiscall
juce::GZIPDecompressorInputStream::setPosition(GZIPDecompressorInputStream *this,long param_1)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  long *plVar11;
  
  lVar7 = *(long *)(this + 0x38);
  if (lVar7 <= param_1) goto LAB_004bdfd2;
  this[0x24] = (GZIPDecompressorInputStream)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  pbVar4 = operator_new(0x88);
  iVar1 = *(int *)(this + 0x20);
  pbVar4[0] = 1;
  pbVar4[1] = 0;
  pbVar4[2] = 1;
  pbVar4[3] = 0;
  pbVar4[0x48] = 0;
  pbVar4[0x49] = 0;
  pbVar4[0x4a] = 0;
  pbVar4[0x4b] = 0;
  pbVar4[0x4c] = 0;
  pbVar4[0x4d] = 0;
  pbVar4[0x4e] = 0;
  pbVar4[0x4f] = 0;
  pbVar4[0x50] = 0;
  pbVar4[0x51] = 0;
  pbVar4[0x52] = 0;
  pbVar4[0x53] = 0;
  pbVar4[0x54] = 0;
  pbVar4[0x55] = 0;
  pbVar4[0x56] = 0;
  pbVar4[0x57] = 0;
  pbVar4[0x78] = 0;
  pbVar4[0x79] = 0;
  pbVar4[0x7a] = 0;
  pbVar4[0x7b] = 0;
  pbVar4[0x7c] = 0;
  pbVar4[0x7d] = 0;
  pbVar4[0x7e] = 0;
  pbVar4[0x7f] = 0;
  pbVar4[0x80] = 0;
  pbVar4[0x81] = 0;
  pbVar4[0x82] = 0;
  pbVar4[0x83] = 0;
  pbVar4[0x84] = 0;
  pbVar4[0x85] = 0;
  pbVar4[0x86] = 0;
  pbVar4[0x87] = 0;
  pbVar4[0x68] = 0;
  pbVar4[0x69] = 0;
  pbVar4[0x6a] = 0;
  pbVar4[0x6b] = 0;
  pbVar4[0x6c] = 0;
  pbVar4[0x6d] = 0;
  pbVar4[0x6e] = 0;
  pbVar4[0x6f] = 0;
  pbVar4[0x70] = 0;
  pbVar4[0x71] = 0;
  pbVar4[0x72] = 0;
  pbVar4[0x73] = 0;
  pbVar4[0x74] = 0;
  pbVar4[0x75] = 0;
  pbVar4[0x76] = 0;
  pbVar4[0x77] = 0;
  pbVar4[0x58] = 0;
  pbVar4[0x59] = 0;
  pbVar4[0x5a] = 0;
  pbVar4[0x5b] = 0;
  pbVar4[0x5c] = 0;
  pbVar4[0x5d] = 0;
  pbVar4[0x5e] = 0;
  pbVar4[0x5f] = 0;
  pbVar4[0x60] = 0;
  pbVar4[0x61] = 0;
  pbVar4[0x62] = 0;
  pbVar4[99] = 0;
  pbVar4[100] = 0;
  pbVar4[0x65] = 0;
  pbVar4[0x66] = 0;
  pbVar4[0x67] = 0;
  pbVar4[0x38] = 0;
  pbVar4[0x39] = 0;
  pbVar4[0x3a] = 0;
  pbVar4[0x3b] = 0;
  pbVar4[0x3c] = 0;
  pbVar4[0x3d] = 0;
  pbVar4[0x3e] = 0;
  pbVar4[0x3f] = 0;
  pbVar4[0x40] = 0;
  pbVar4[0x41] = 0;
  pbVar4[0x42] = 0;
  pbVar4[0x43] = 0;
  pbVar4[0x44] = 0;
  pbVar4[0x45] = 0;
  pbVar4[0x46] = 0;
  pbVar4[0x47] = 0;
  pbVar4[0x28] = 0;
  pbVar4[0x29] = 0;
  pbVar4[0x2a] = 0;
  pbVar4[0x2b] = 0;
  pbVar4[0x2c] = 0;
  pbVar4[0x2d] = 0;
  pbVar4[0x2e] = 0;
  pbVar4[0x2f] = 0;
  pbVar4[0x30] = 0;
  pbVar4[0x31] = 0;
  pbVar4[0x32] = 0;
  pbVar4[0x33] = 0;
  pbVar4[0x34] = 0;
  pbVar4[0x35] = 0;
  pbVar4[0x36] = 0;
  pbVar4[0x37] = 0;
  pbVar4[0x18] = 0;
  pbVar4[0x19] = 0;
  pbVar4[0x1a] = 0;
  pbVar4[0x1b] = 0;
  pbVar4[0x1c] = 0;
  pbVar4[0x1d] = 0;
  pbVar4[0x1e] = 0;
  pbVar4[0x1f] = 0;
  pbVar4[0x20] = 0;
  pbVar4[0x21] = 0;
  pbVar4[0x22] = 0;
  pbVar4[0x23] = 0;
  pbVar4[0x24] = 0;
  pbVar4[0x25] = 0;
  pbVar4[0x26] = 0;
  pbVar4[0x27] = 0;
  pbVar4[8] = 0;
  pbVar4[9] = 0;
  pbVar4[10] = 0;
  pbVar4[0xb] = 0;
  pbVar4[0xc] = 0;
  pbVar4[0xd] = 0;
  pbVar4[0xe] = 0;
  pbVar4[0xf] = 0;
  pbVar4[0x10] = 0;
  pbVar4[0x11] = 0;
  pbVar4[0x12] = 0;
  pbVar4[0x13] = 0;
  pbVar4[0x14] = 0;
  pbVar4[0x15] = 0;
  pbVar4[0x16] = 0;
  pbVar4[0x17] = 0;
  *(code **)(pbVar4 + 0x48) = zlibNamespace::zcalloc;
  *(code **)(pbVar4 + 0x50) = zlibNamespace::zcfree;
  puVar5 = malloc(0x1bf8);
  if (puVar5 == (undefined8 *)0x0) {
LAB_004bdf39:
    bVar3 = 0;
  }
  else {
    uVar8 = 0xf;
    if (iVar1 == 1) {
      uVar8 = 0xfffffff1;
    }
    uVar10 = 0x1f;
    if (iVar1 != 2) {
      uVar10 = uVar8;
    }
    *(undefined8 **)(pbVar4 + 0x40) = puVar5;
    *puVar5 = pbVar4 + 8;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 1) = 0x3f34;
                    /* try { // try from 004bdf1e to 004bdf30 has its CatchHandler @ 004bdff7 */
    uVar6 = zlibNamespace::inflateReset2((long)(pbVar4 + 8),uVar10);
    if ((int)uVar6 != 0) {
      (**(code **)(pbVar4 + 0x50))(*(undefined8 *)(pbVar4 + 0x58),puVar5);
      pbVar4[0x40] = 0;
      pbVar4[0x41] = 0;
      pbVar4[0x42] = 0;
      pbVar4[0x43] = 0;
      pbVar4[0x44] = 0;
      pbVar4[0x45] = 0;
      pbVar4[0x46] = 0;
      pbVar4[0x47] = 0;
      goto LAB_004bdf39;
    }
    bVar3 = 1;
  }
  pbVar4[3] = bVar3;
  pbVar4[2] = bVar3 ^ 1;
  *pbVar4 = bVar3 ^ 1;
  pvVar2 = *(void **)(this + 0x48);
  *(byte **)(this + 0x48) = pbVar4;
  if (pvVar2 != (void *)0x0) {
    if ((((*(char *)((long)pvVar2 + 3) != '\0') && (*(long *)((long)pvVar2 + 0x48) != 0)) &&
        (pcVar9 = *(code **)((long)pvVar2 + 0x50), pcVar9 != (code *)0x0)) &&
       (((plVar11 = *(long **)((long)pvVar2 + 0x40), plVar11 != (long *)0x0 &&
         (*plVar11 == (long)pvVar2 + 8)) && ((int)plVar11[1] - 0x3f34U < 0x20)))) {
      if (plVar11[9] != 0) {
                    /* try { // try from 004bdf9f to 004bdfb4 has its CatchHandler @ 004bdfef */
        (*pcVar9)(*(undefined8 *)((long)pvVar2 + 0x58),plVar11[9]);
        plVar11 = *(long **)((long)pvVar2 + 0x40);
        pcVar9 = *(code **)((long)pvVar2 + 0x50);
      }
      (*pcVar9)(*(undefined8 *)((long)pvVar2 + 0x58),plVar11);
    }
    operator_delete(pvVar2);
  }
  (**(code **)(**(long **)(this + 8) + 0xb8))(*(long **)(this + 8),*(undefined8 *)(this + 0x30));
  lVar7 = *(long *)(this + 0x38);
LAB_004bdfd2:
  uVar6 = (**(code **)(*(long *)this + 0xc0))(this,param_1 - lVar7);
  return CONCAT71((int7)((ulong)uVar6 >> 8),1);
}



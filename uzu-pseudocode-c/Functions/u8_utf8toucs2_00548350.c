// Function : u8_utf8toucs2
// Namespace: 
// Entry    : 00548350
// Prototype: undefined u8_utf8toucs2(long param_1, int param_2, byte * param_3, int param_4)
// Body     : 00548350 - 005484e2


void u8_utf8toucs2(long param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  short sVar12;
  
  uVar3 = 0;
  if (1 < param_2) {
    uVar10 = param_2 - 1;
    if (param_4 == -1) {
      uVar3 = 0;
      do {
        bVar1 = *param_3;
        uVar9 = (uint)bVar1;
        if ((ulong)bVar1 == 0) goto LAB_005484d2;
        cVar2 = trailingBytesForUTF8[bVar1];
        uVar7 = 0;
        sVar5 = 0;
        iVar6 = (int)cVar2;
        switch(cVar2) {
        case '\x03':
          uVar7 = (uint)bVar1 << 6;
          uVar9 = (uint)param_3[1];
          param_3 = param_3 + 1;
        case '\x02':
          uVar7 = (uVar9 + uVar7) * 0x40;
          uVar9 = (uint)param_3[1];
          param_3 = param_3 + 1;
        case '\x01':
          iVar6 = ((uVar7 & 0xffc0) + uVar9) * 0x40;
          bVar1 = param_3[1];
          param_3 = param_3 + 1;
        case '\0':
          param_3 = param_3 + 1;
          sVar5 = (ushort)bVar1 + (short)iVar6;
        }
        *(short *)(param_1 + uVar3 * 2) = sVar5 - (short)(&offsetsFromUTF8)[(int)cVar2];
        uVar3 = uVar3 + 1;
      } while (uVar10 != uVar3);
    }
    else {
      pbVar11 = param_3 + param_4;
      uVar3 = 0;
      do {
        bVar1 = *param_3;
        uVar4 = (ushort)bVar1;
        cVar2 = trailingBytesForUTF8[bVar1];
        if (pbVar11 <= param_3 + cVar2) goto LAB_005484d2;
        sVar5 = 0;
        sVar8 = 0;
        sVar12 = (short)cVar2;
        switch(cVar2) {
        case '\x03':
          sVar5 = (ushort)bVar1 << 6;
          uVar4 = (ushort)param_3[1];
          param_3 = param_3 + 1;
        case '\x02':
          sVar5 = (uVar4 + sVar5) * 0x40;
          uVar4 = (ushort)param_3[1];
          param_3 = param_3 + 1;
        case '\x01':
          sVar12 = (sVar5 + uVar4) * 0x40;
          bVar1 = param_3[1];
          param_3 = param_3 + 1;
        case '\0':
          param_3 = param_3 + 1;
          sVar8 = (ushort)bVar1 + sVar12;
        }
        *(short *)(param_1 + uVar3 * 2) = sVar8 - (short)(&offsetsFromUTF8)[cVar2];
        uVar3 = uVar3 + 1;
      } while (uVar10 != uVar3);
    }
    uVar3 = (ulong)uVar10;
  }
LAB_005484d2:
  *(undefined2 *)(param_1 + (uVar3 & 0xffffffff) * 2) = 0;
  return;
}



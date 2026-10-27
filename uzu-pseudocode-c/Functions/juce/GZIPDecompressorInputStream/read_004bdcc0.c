// Function : read
// Namespace: juce:GZIPDecompressorInputStream
// Entry    : 004bdcc0
// Prototype: int read(GZIPDecompressorInputStream * this, long param_1, int param_2)
// Body     : 004bdcc0 - 004bde3e


/* juce::GZIPDecompressorInputStream::read(void*, int) */

int __thiscall
juce::GZIPDecompressorInputStream::read(GZIPDecompressorInputStream *this,long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  if (((0 < param_2) && (this[0x24] == (GZIPDecompressorInputStream)0x0)) &&
     (pcVar5 = *(char **)(this + 0x48), pcVar5[2] == '\0')) {
    iVar6 = 0;
    do {
      if (((pcVar5[3] == '\0') || (*(long *)(pcVar5 + 0x78) == 0)) || (*pcVar5 != '\0'))
      goto switchD_004bddb7_caseD_fffffffe;
      *(long *)(pcVar5 + 8) = *(long *)(pcVar5 + 0x78);
      *(long *)(pcVar5 + 0x20) = param_1;
      *(undefined4 *)(pcVar5 + 0x10) = *(undefined4 *)(pcVar5 + 0x80);
      *(int *)(pcVar5 + 0x28) = param_2;
      iVar3 = zlibNamespace::inflate((long *)(pcVar5 + 8),1);
      switch(iVar3) {
      case 0:
        goto switchD_004bddb7_caseD_0;
      case 1:
        *pcVar5 = '\x01';
switchD_004bddb7_caseD_0:
        iVar3 = *(int *)(pcVar5 + 0x28);
        *(ulong *)(pcVar5 + 0x78) =
             *(long *)(pcVar5 + 0x78) + (*(long *)(pcVar5 + 0x80) - (ulong)*(uint *)(pcVar5 + 0x10))
        ;
        *(ulong *)(pcVar5 + 0x80) = (ulong)*(uint *)(pcVar5 + 0x10);
        iVar4 = param_2 - iVar3;
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + (long)iVar4;
        if (iVar4 == 0) break;
        iVar6 = iVar6 + iVar4;
        if (iVar3 < 1) {
          return iVar6;
        }
        param_1 = param_1 + iVar4;
        param_2 = iVar3;
        goto LAB_004bdd15;
      case 2:
        pcVar5[1] = '\x01';
        *(ulong *)(pcVar5 + 0x78) =
             *(long *)(pcVar5 + 0x78) + (*(long *)(pcVar5 + 0x80) - (ulong)*(uint *)(pcVar5 + 0x10))
        ;
        *(ulong *)(pcVar5 + 0x80) = (ulong)*(uint *)(pcVar5 + 0x10);
        break;
      case -4:
      case -3:
        pcVar5[2] = '\x01';
      }
switchD_004bddb7_caseD_fffffffe:
      pcVar5 = *(char **)(this + 0x48);
      if ((*pcVar5 != '\0') || (pcVar5[1] != '\0')) {
LAB_004bde29:
        this[0x24] = (GZIPDecompressorInputStream)0x1;
        return iVar6;
      }
      if (*(long *)(pcVar5 + 0x80) == 0) {
        uVar2 = (**(code **)(**(long **)(this + 8) + 0x20))
                          (*(long **)(this + 8),*(undefined8 *)(this + 0x40),0x8000);
        *(uint *)(this + 0x28) = uVar2;
        if ((int)uVar2 < 1) goto LAB_004bde29;
        lVar1 = *(long *)(this + 0x48);
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(this + 0x40);
        *(ulong *)(lVar1 + 0x80) = (ulong)uVar2;
      }
LAB_004bdd15:
      pcVar5 = *(char **)(this + 0x48);
    } while (pcVar5[2] == '\0');
  }
  return 0;
}



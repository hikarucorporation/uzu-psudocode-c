// Function : copyInternal
// Namespace: juce:File
// Entry    : 004a0700
// Prototype: ulong copyInternal(File * this, File * param_1)
// Body     : 004a0700 - 004a0831


/* juce::File::copyInternal(juce::File const&) const */

ulong __thiscall juce::File::copyInternal(File *this,File *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  __off_t _Var6;
  long lVar7;
  ulong uVar8;
  long local_20a8 [5];
  long local_2080 [4];
  char *local_2060;
  stat64 local_2038 [56];
  
  FileInputStream::FileInputStream((FileInputStream *)local_20a8,(long *)this);
                    /* try { // try from 004a0724 to 004a072b has its CatchHandler @ 004a0834 */
  uVar4 = deleteFile(param_1);
  if ((char)uVar4 != '\0') {
                    /* try { // try from 004a0734 to 004a0745 has its CatchHandler @ 004a0832 */
    FileOutputStream::FileOutputStream((FileOutputStream *)local_2080,(long *)param_1,0x4000);
    if (*local_2060 == '\0') {
      lVar7 = 0;
      uVar4 = 0x7fffffffffffffff;
      do {
        uVar5 = uVar4 & 0xffffffff;
        if (0x1fff < uVar4) {
          uVar5 = 0x2000;
        }
                    /* try { // try from 004a07a6 to 004a07c5 has its CatchHandler @ 004a0839 */
        uVar2 = (**(code **)(local_20a8[0] + 0x20))(local_20a8,local_2038,uVar5);
        if ((int)uVar2 < 1) break;
        uVar5 = (ulong)uVar2;
        (**(code **)(local_2080[0] + 0x28))(local_2080,local_2038,uVar5);
        lVar7 = lVar7 + uVar5;
        uVar8 = uVar4 - uVar5;
        bVar1 = (long)uVar5 <= (long)uVar4;
        uVar4 = uVar8;
      } while (uVar8 != 0 && bVar1);
      if (**(char **)this == '\0') {
LAB_004a07f6:
        _Var6 = 0;
      }
      else {
        iVar3 = stat64(*(char **)this,local_2038);
        if (iVar3 != 0) goto LAB_004a07f6;
        _Var6 = local_2038[0].st_size;
      }
      FileOutputStream::~FileOutputStream((FileOutputStream *)local_2080);
      uVar4 = CONCAT71((int7)((ulong)local_2038 >> 8),1);
      if (lVar7 == _Var6) goto LAB_004a0814;
                    /* try { // try from 004a0809 to 004a0811 has its CatchHandler @ 004a0834 */
      deleteFile(param_1);
    }
    else {
      FileOutputStream::~FileOutputStream((FileOutputStream *)local_2080);
    }
  }
  uVar4 = 0;
LAB_004a0814:
  FileInputStream::~FileInputStream((FileInputStream *)local_20a8);
  return uVar4 & 0xffffffff;
}



// Function : getSizeInUnits
// Namespace: juce:TextEditor:InsertAction
// Entry    : 002472e0
// Prototype: int getSizeInUnits(InsertAction * this)
// Body     : 002472e0 - 00247325


/* juce::TextEditor::InsertAction::getSizeInUnits() */

int __thiscall juce::TextEditor::InsertAction::getSizeInUnits(InsertAction *this)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(this + 0x10);
  iVar3 = 0;
  do {
    cVar2 = *pcVar4;
    if (cVar2 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar4 + 1);
        pcVar4 = pcVar4 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar4 = pcVar4 + 1;
      if (cVar2 == '\0') {
        return iVar3 + 0x10;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



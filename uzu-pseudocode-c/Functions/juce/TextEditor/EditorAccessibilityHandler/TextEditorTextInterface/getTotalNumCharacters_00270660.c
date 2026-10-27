// Function : getTotalNumCharacters
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270660
// Prototype: int getTotalNumCharacters(long param_1)
// Body     : 00270660 - 002706f3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getTotalNumCharacters()
   const */

int __cdecl
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getTotalNumCharacters
          (long param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *local_10;
  
  ParagraphsModel::getText(&local_10,*(long *)(*(long *)(param_1 + 8) + 0x330) + 0x60);
  iVar5 = 0;
  pcVar4 = local_10;
  do {
    cVar3 = *pcVar4;
    if (cVar3 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar4 + 1);
        pcVar4 = pcVar4 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar4 = pcVar4 + 1;
      if (cVar3 == '\0') {
        piVar6 = (int *)(local_10 + -0x10);
        if (piVar6 != &emptyString) {
          LOCK();
          iVar2 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar6);
            return iVar5;
          }
        }
        return iVar5;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



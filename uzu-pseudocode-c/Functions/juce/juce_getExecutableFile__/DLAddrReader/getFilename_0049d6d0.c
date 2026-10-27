// Function : getFilename
// Namespace: juce:juce_getExecutableFile__:DLAddrReader
// Entry    : 0049d6d0
// Prototype: undefined getFilename(void)
// Body     : 0049d6d0 - 0049d6fa


/* getFilename() */

void juce::juce_getExecutableFile()::DLAddrReader::getFilename(void)

{
  byte *local_20 [4];
  
  dladdr(juce_getExecutableFile,local_20);
  filename = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(local_20[0]);
  return;
}



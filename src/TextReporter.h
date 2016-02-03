// Copyright 2016 Caphyon Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http ://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

struct TextSize;

/**
 * Print the current and required size of a text block.
 *
 * @author  Teodor MICU
 */
class TextReporter
{
public:
  /**
   * Class constructor.
   */
  TextReporter(std::wostream & /*aOStream*/, UINT aCodepage = CODEPAGE_ENGLISH);

  /**
   * Print the text block measurements.
   */
  TextReporter & operator<<(const TextSize & /*aSzText*/);

private:
  std::wostream & mOStream;       // output stream
  std::wstring mOldDlgName;       // parent of this text block
};

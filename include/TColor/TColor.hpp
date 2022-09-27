#pragma once

#include <iostream>
#include <ostream>

namespace TEVES
{
    class TColor
    {
        public:
            TColor();
            ~TColor();
            TColor tc_release();

            TColor tc_inverse();
            TColor tc_normal();
            TColor tc_underline();
            TColor tc_nounderline();

            TColor tf_red();
            
            TColor tf_blue();
            TColor tf_pink();
            TColor tf_gray();
            TColor tf_light_blue();
            TColor tf_green();
            TColor tf_yellow();
            TColor tf_white();
            TColor tf_orange();

            TColor tb_black();
            TColor tb_red();
            TColor tb_blue();
            TColor tb_pink();
            TColor tb_gray();
            TColor tb_light_blue();
            TColor tb_green();
            TColor tb_yellow();
            TColor tb_white();
            TColor tb_orange();
    };
} // namespace TEVES
std::ostream& operator<< (std::ostream& os, const TEVES::TColor& obj);
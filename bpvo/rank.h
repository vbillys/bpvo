/*
   This file is part of bpvo.

   bpvo is free software: you can redistribute it and/or modify
   it under the terms of the Lesser GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   bpvo is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   Lesser GNU General Public License for more details.

   You should have received a copy of the Lesser GNU General Public License
   along with bpvo.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * Contributor: halismai@cs.cmu.edu
 */

#ifndef BPVO_RANK_H
#define BPVO_RANK_H


#include <array>

namespace cv {
class Mat;
};

namespace bpvo {

cv::Mat rankTransform(const cv::Mat& src, float sigma = -1.0f);
void completeRankPlanes(const cv::Mat& src, std::array<cv::Mat,9>&,
                        float sigma = -1.0, float sigma_rank = -1.0f);

}; // bpvo

#endif // BPVO_RANK_H
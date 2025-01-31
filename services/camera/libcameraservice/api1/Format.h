/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef _MTK_HARDWARE_INCLUDE_MTKCAM_UTILS_FORMAT_H_
#define _MTK_HARDWARE_INCLUDE_MTKCAM_UTILS_FORMAT_H_
//


/******************************************************************************
 *
 ******************************************************************************/
namespace NSCam {
namespace Utils {
namespace Format {

bool
checkValidFormat(
    int const imageFormat
);

/*****************************************************************************
 * @brief Query the plane count.
 *
 * @details Given a format of type EImageFormat, return its corresponding
 * plane count.
 *
 * @note
 *
 * @param[in] imageFormat: A format of type EImageFormat.
 *
 * @return its corresponding plane count.
 *
 ******************************************************************************/
size_t
queryPlaneCount(
    int const imageFormat
);


/*****************************************************************************
 * @brief Query the width in pixels of a specific plane.
 *
 * @details Given a format of type EImageFormat, a plane index, and the width in
 * in pixels of the 0-th plane, return the width in pixels of the given plane.
 *
 * @note
 *
 * @param[in] imageFormat: A format of type EImageFormat.
 * @param[in] planeIndex: a specific plane index.
 * @param[in] widthInPixels: the width in pixels of the 0-th plane.
 *
 * @return the width in pixels of the given plane.
 *
 ******************************************************************************/
size_t
queryPlaneWidthInPixels(
    int const imageFormat,
    size_t planeIndex,
    size_t widthInPixels
);


/*****************************************************************************
 * @brief Query the height in pixels of a specific plane.
 *
 * @details Given a format of type EImageFormat, a plane index, and the height
 * in pixels of the 0-th plane, return the height in pixels of the given plane.
 *
 * @note
 *
 * @param[in] imageFormat: A format of type EImageFormat.
 * @param[in] planeIndex: a specific plane index.
 * @param[in] heightInPixels: the height in pixels of the 0-th plane.
 *
 * @return the height in pixels of the given plane.
 *
 ******************************************************************************/
size_t
queryPlaneHeightInPixels(
    int const imageFormat,
    size_t planeIndex,
    size_t heightInPixels
);


/*****************************************************************************
 * @brief Query the bits per pixel of a specific plane.
 *
 * @details Given a format of type EImageFormat and a plane index, return
 * the bits per pixel of the given plane.
 *
 * @note
 *
 * @param[in] imageFormat: A format of type EImageFormat.
 * @param[in] planeIndex: a specific plane index.
 *
 * @return the bits per pixel of the given plane.
 *
 ******************************************************************************/
int
queryPlaneBitsPerPixel(
    int const imageFormat,
    size_t planeIndex
);


/*****************************************************************************
 * @brief Query the bits per pixel of a specific format.
 *
 * @details Given a format of type EImageFormat, return the bits per pixel.
 *
 * @note
 *
 * @param[in] imageFormat: A format of type EImageFormat.
 *
 * @return the bits per pixel.
 *
 ******************************************************************************/
int
queryImageBitsPerPixel(
    int const imageFormat
);


/*****************************************************************************
 * @brief Query the image format constant.
 *
 * @details Given a MtkCameraParameters::PIXEL_FORMAT_xxx, return its
 * corresponding image format constant.
 *
 * @note
 *
 * @param[in] szPixelFormat: A null-terminated string for pixel format (i.e.
 * MtkCameraParameters::PIXEL_FORMAT_xxx)
 *
 * @return its corresponding image format.
 *
 ******************************************************************************/
int
queryImageFormat(
    char const* szPixelFormat
);

/*****************************************************************************
 * @Dump the information of Image map.
 ******************************************************************************/
void
dumpMapInformation();

/******************************************************************************
 *
 ******************************************************************************/
};  // namespace Format
};  // namespace Utils
};  // namespace NSCam
#endif  //_MTK_HARDWARE_INCLUDE_MTKCAM_UTILS_FORMAT_H_
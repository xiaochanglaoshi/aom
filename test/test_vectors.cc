/*
 *  Copyright (c) 2013 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "test/test_vectors.h"

namespace libvpx_test {

#define NELEMENTS(x) static_cast<int>(sizeof(x) / sizeof(x[0]))

#if CONFIG_VP8_DECODER
const char *const kVP8TestVectors[] = {
  "vp80-00-comprehensive-001.ivf",
  "vp80-00-comprehensive-002.ivf", "vp80-00-comprehensive-003.ivf",
  "vp80-00-comprehensive-004.ivf", "vp80-00-comprehensive-005.ivf",
  "vp80-00-comprehensive-006.ivf", "vp80-00-comprehensive-007.ivf",
  "vp80-00-comprehensive-008.ivf", "vp80-00-comprehensive-009.ivf",
  "vp80-00-comprehensive-010.ivf", "vp80-00-comprehensive-011.ivf",
  "vp80-00-comprehensive-012.ivf", "vp80-00-comprehensive-013.ivf",
  "vp80-00-comprehensive-014.ivf", "vp80-00-comprehensive-015.ivf",
  "vp80-00-comprehensive-016.ivf", "vp80-00-comprehensive-017.ivf",
  "vp80-00-comprehensive-018.ivf", "vp80-01-intra-1400.ivf",
  "vp80-01-intra-1411.ivf", "vp80-01-intra-1416.ivf",
  "vp80-01-intra-1417.ivf", "vp80-02-inter-1402.ivf",
  "vp80-02-inter-1412.ivf", "vp80-02-inter-1418.ivf",
  "vp80-02-inter-1424.ivf", "vp80-03-segmentation-01.ivf",
  "vp80-03-segmentation-02.ivf", "vp80-03-segmentation-03.ivf",
  "vp80-03-segmentation-04.ivf", "vp80-03-segmentation-1401.ivf",
  "vp80-03-segmentation-1403.ivf", "vp80-03-segmentation-1407.ivf",
  "vp80-03-segmentation-1408.ivf", "vp80-03-segmentation-1409.ivf",
  "vp80-03-segmentation-1410.ivf", "vp80-03-segmentation-1413.ivf",
  "vp80-03-segmentation-1414.ivf", "vp80-03-segmentation-1415.ivf",
  "vp80-03-segmentation-1425.ivf", "vp80-03-segmentation-1426.ivf",
  "vp80-03-segmentation-1427.ivf", "vp80-03-segmentation-1432.ivf",
  "vp80-03-segmentation-1435.ivf", "vp80-03-segmentation-1436.ivf",
  "vp80-03-segmentation-1437.ivf", "vp80-03-segmentation-1441.ivf",
  "vp80-03-segmentation-1442.ivf", "vp80-04-partitions-1404.ivf",
  "vp80-04-partitions-1405.ivf", "vp80-04-partitions-1406.ivf",
  "vp80-05-sharpness-1428.ivf", "vp80-05-sharpness-1429.ivf",
  "vp80-05-sharpness-1430.ivf", "vp80-05-sharpness-1431.ivf",
  "vp80-05-sharpness-1433.ivf", "vp80-05-sharpness-1434.ivf",
  "vp80-05-sharpness-1438.ivf", "vp80-05-sharpness-1439.ivf",
  "vp80-05-sharpness-1440.ivf", "vp80-05-sharpness-1443.ivf",
  "vp80-06-smallsize.ivf"
};
const int kNumVP8TestVectors = NELEMENTS(kVP8TestVectors);
#endif  // CONFIG_VP8_DECODER
#if CONFIG_VP9_DECODER
#define RESIZE_TEST_VECTORS "vp90-2-21-resize_inter_320x180_5_1-2.webm", \
  "vp90-2-21-resize_inter_320x180_5_3-4.webm", \
  "vp90-2-21-resize_inter_320x180_7_1-2.webm", \
  "vp90-2-21-resize_inter_320x180_7_3-4.webm", \
  "vp90-2-21-resize_inter_320x240_5_1-2.webm", \
  "vp90-2-21-resize_inter_320x240_5_3-4.webm", \
  "vp90-2-21-resize_inter_320x240_7_1-2.webm", \
  "vp90-2-21-resize_inter_320x240_7_3-4.webm", \
  "vp90-2-21-resize_inter_640x360_5_1-2.webm", \
  "vp90-2-21-resize_inter_640x360_5_3-4.webm", \
  "vp90-2-21-resize_inter_640x360_7_1-2.webm", \
  "vp90-2-21-resize_inter_640x360_7_3-4.webm", \
  "vp90-2-21-resize_inter_640x480_5_1-2.webm", \
  "vp90-2-21-resize_inter_640x480_5_3-4.webm", \
  "vp90-2-21-resize_inter_640x480_7_1-2.webm", \
  "vp90-2-21-resize_inter_640x480_7_3-4.webm", \
  "vp90-2-21-resize_inter_1280x720_5_1-2.webm", \
  "vp90-2-21-resize_inter_1280x720_5_3-4.webm", \
  "vp90-2-21-resize_inter_1280x720_7_1-2.webm", \
  "vp90-2-21-resize_inter_1280x720_7_3-4.webm", \
  "vp90-2-21-resize_inter_1920x1080_5_1-2.webm", \
  "vp90-2-21-resize_inter_1920x1080_5_3-4.webm", \
  "vp90-2-21-resize_inter_1920x1080_7_1-2.webm", \
  "vp90-2-21-resize_inter_1920x1080_7_3-4.webm",

const char *const kVP9TestVectors[] = {
  "vp90-2-00-quantizer-00.webm", "vp90-2-00-quantizer-01.webm",
  "vp90-2-00-quantizer-02.webm", "vp90-2-00-quantizer-03.webm",
  "vp90-2-00-quantizer-04.webm", "vp90-2-00-quantizer-05.webm",
  "vp90-2-00-quantizer-06.webm", "vp90-2-00-quantizer-07.webm",
  "vp90-2-00-quantizer-08.webm", "vp90-2-00-quantizer-09.webm",
  "vp90-2-00-quantizer-10.webm", "vp90-2-00-quantizer-11.webm",
  "vp90-2-00-quantizer-12.webm", "vp90-2-00-quantizer-13.webm",
  "vp90-2-00-quantizer-14.webm", "vp90-2-00-quantizer-15.webm",
  "vp90-2-00-quantizer-16.webm", "vp90-2-00-quantizer-17.webm",
  "vp90-2-00-quantizer-18.webm", "vp90-2-00-quantizer-19.webm",
  "vp90-2-00-quantizer-20.webm", "vp90-2-00-quantizer-21.webm",
  "vp90-2-00-quantizer-22.webm", "vp90-2-00-quantizer-23.webm",
  "vp90-2-00-quantizer-24.webm", "vp90-2-00-quantizer-25.webm",
  "vp90-2-00-quantizer-26.webm", "vp90-2-00-quantizer-27.webm",
  "vp90-2-00-quantizer-28.webm", "vp90-2-00-quantizer-29.webm",
  "vp90-2-00-quantizer-30.webm", "vp90-2-00-quantizer-31.webm",
  "vp90-2-00-quantizer-32.webm", "vp90-2-00-quantizer-33.webm",
  "vp90-2-00-quantizer-34.webm", "vp90-2-00-quantizer-35.webm",
  "vp90-2-00-quantizer-36.webm", "vp90-2-00-quantizer-37.webm",
  "vp90-2-00-quantizer-38.webm", "vp90-2-00-quantizer-39.webm",
  "vp90-2-00-quantizer-40.webm", "vp90-2-00-quantizer-41.webm",
  "vp90-2-00-quantizer-42.webm", "vp90-2-00-quantizer-43.webm",
  "vp90-2-00-quantizer-44.webm", "vp90-2-00-quantizer-45.webm",
  "vp90-2-00-quantizer-46.webm", "vp90-2-00-quantizer-47.webm",
  "vp90-2-00-quantizer-48.webm", "vp90-2-00-quantizer-49.webm",
  "vp90-2-00-quantizer-50.webm", "vp90-2-00-quantizer-51.webm",
  "vp90-2-00-quantizer-52.webm", "vp90-2-00-quantizer-53.webm",
  "vp90-2-00-quantizer-54.webm", "vp90-2-00-quantizer-55.webm",
  "vp90-2-00-quantizer-56.webm", "vp90-2-00-quantizer-57.webm",
  "vp90-2-00-quantizer-58.webm", "vp90-2-00-quantizer-59.webm",
  "vp90-2-00-quantizer-60.webm", "vp90-2-00-quantizer-61.webm",
  "vp90-2-00-quantizer-62.webm", "vp90-2-00-quantizer-63.webm",
  "vp90-2-01-sharpness-1.webm", "vp90-2-01-sharpness-2.webm",
  "vp90-2-01-sharpness-3.webm", "vp90-2-01-sharpness-4.webm",
  "vp90-2-01-sharpness-5.webm", "vp90-2-01-sharpness-6.webm",
  "vp90-2-01-sharpness-7.webm", "vp90-2-02-size-08x08.webm",
  "vp90-2-02-size-08x10.webm", "vp90-2-02-size-08x16.webm",
  "vp90-2-02-size-08x18.webm", "vp90-2-02-size-08x32.webm",
  "vp90-2-02-size-08x34.webm", "vp90-2-02-size-08x64.webm",
  "vp90-2-02-size-08x66.webm", "vp90-2-02-size-10x08.webm",
  "vp90-2-02-size-10x10.webm", "vp90-2-02-size-10x16.webm",
  "vp90-2-02-size-10x18.webm", "vp90-2-02-size-10x32.webm",
  "vp90-2-02-size-10x34.webm", "vp90-2-02-size-10x64.webm",
  "vp90-2-02-size-10x66.webm", "vp90-2-02-size-16x08.webm",
  "vp90-2-02-size-16x10.webm", "vp90-2-02-size-16x16.webm",
  "vp90-2-02-size-16x18.webm", "vp90-2-02-size-16x32.webm",
  "vp90-2-02-size-16x34.webm", "vp90-2-02-size-16x64.webm",
  "vp90-2-02-size-16x66.webm", "vp90-2-02-size-18x08.webm",
  "vp90-2-02-size-18x10.webm", "vp90-2-02-size-18x16.webm",
  "vp90-2-02-size-18x18.webm", "vp90-2-02-size-18x32.webm",
  "vp90-2-02-size-18x34.webm", "vp90-2-02-size-18x64.webm",
  "vp90-2-02-size-18x66.webm", "vp90-2-02-size-32x08.webm",
  "vp90-2-02-size-32x10.webm", "vp90-2-02-size-32x16.webm",
  "vp90-2-02-size-32x18.webm", "vp90-2-02-size-32x32.webm",
  "vp90-2-02-size-32x34.webm", "vp90-2-02-size-32x64.webm",
  "vp90-2-02-size-32x66.webm", "vp90-2-02-size-34x08.webm",
  "vp90-2-02-size-34x10.webm", "vp90-2-02-size-34x16.webm",
  "vp90-2-02-size-34x18.webm", "vp90-2-02-size-34x32.webm",
  "vp90-2-02-size-34x34.webm", "vp90-2-02-size-34x64.webm",
  "vp90-2-02-size-34x66.webm", "vp90-2-02-size-64x08.webm",
  "vp90-2-02-size-64x10.webm", "vp90-2-02-size-64x16.webm",
  "vp90-2-02-size-64x18.webm", "vp90-2-02-size-64x32.webm",
  "vp90-2-02-size-64x34.webm", "vp90-2-02-size-64x64.webm",
  "vp90-2-02-size-64x66.webm", "vp90-2-02-size-66x08.webm",
  "vp90-2-02-size-66x10.webm", "vp90-2-02-size-66x16.webm",
  "vp90-2-02-size-66x18.webm", "vp90-2-02-size-66x32.webm",
  "vp90-2-02-size-66x34.webm", "vp90-2-02-size-66x64.webm",
  "vp90-2-02-size-66x66.webm", "vp90-2-02-size-130x132.webm",
  "vp90-2-02-size-132x130.webm", "vp90-2-02-size-132x132.webm",
  "vp90-2-02-size-178x180.webm", "vp90-2-02-size-180x178.webm",
  "vp90-2-02-size-180x180.webm", "vp90-2-03-size-196x196.webm",
  "vp90-2-03-size-196x198.webm", "vp90-2-03-size-196x200.webm",
  "vp90-2-03-size-196x202.webm", "vp90-2-03-size-196x208.webm",
  "vp90-2-03-size-196x210.webm", "vp90-2-03-size-196x224.webm",
  "vp90-2-03-size-196x226.webm", "vp90-2-03-size-198x196.webm",
  "vp90-2-03-size-198x198.webm", "vp90-2-03-size-198x200.webm",
  "vp90-2-03-size-198x202.webm", "vp90-2-03-size-198x208.webm",
  "vp90-2-03-size-198x210.webm", "vp90-2-03-size-198x224.webm",
  "vp90-2-03-size-198x226.webm", "vp90-2-03-size-200x196.webm",
  "vp90-2-03-size-200x198.webm", "vp90-2-03-size-200x200.webm",
  "vp90-2-03-size-200x202.webm", "vp90-2-03-size-200x208.webm",
  "vp90-2-03-size-200x210.webm", "vp90-2-03-size-200x224.webm",
  "vp90-2-03-size-200x226.webm", "vp90-2-03-size-202x196.webm",
  "vp90-2-03-size-202x198.webm", "vp90-2-03-size-202x200.webm",
  "vp90-2-03-size-202x202.webm", "vp90-2-03-size-202x208.webm",
  "vp90-2-03-size-202x210.webm", "vp90-2-03-size-202x224.webm",
  "vp90-2-03-size-202x226.webm", "vp90-2-03-size-208x196.webm",
  "vp90-2-03-size-208x198.webm", "vp90-2-03-size-208x200.webm",
  "vp90-2-03-size-208x202.webm", "vp90-2-03-size-208x208.webm",
  "vp90-2-03-size-208x210.webm", "vp90-2-03-size-208x224.webm",
  "vp90-2-03-size-208x226.webm", "vp90-2-03-size-210x196.webm",
  "vp90-2-03-size-210x198.webm", "vp90-2-03-size-210x200.webm",
  "vp90-2-03-size-210x202.webm", "vp90-2-03-size-210x208.webm",
  "vp90-2-03-size-210x210.webm", "vp90-2-03-size-210x224.webm",
  "vp90-2-03-size-210x226.webm", "vp90-2-03-size-224x196.webm",
  "vp90-2-03-size-224x198.webm", "vp90-2-03-size-224x200.webm",
  "vp90-2-03-size-224x202.webm", "vp90-2-03-size-224x208.webm",
  "vp90-2-03-size-224x210.webm", "vp90-2-03-size-224x224.webm",
  "vp90-2-03-size-224x226.webm", "vp90-2-03-size-226x196.webm",
  "vp90-2-03-size-226x198.webm", "vp90-2-03-size-226x200.webm",
  "vp90-2-03-size-226x202.webm", "vp90-2-03-size-226x208.webm",
  "vp90-2-03-size-226x210.webm", "vp90-2-03-size-226x224.webm",
  "vp90-2-03-size-226x226.webm", "vp90-2-03-deltaq.webm",
  "vp90-2-05-resize.ivf", "vp90-2-06-bilinear.webm",
  "vp90-2-07-frame_parallel.webm", "vp90-2-08-tile_1x2_frame_parallel.webm",
  "vp90-2-08-tile_1x2.webm", "vp90-2-08-tile_1x4_frame_parallel.webm",
  "vp90-2-08-tile_1x4.webm", "vp90-2-08-tile_1x8_frame_parallel.webm",
  "vp90-2-08-tile_1x8.webm", "vp90-2-08-tile-4x4.webm",
  "vp90-2-08-tile-4x1.webm", "vp90-2-09-subpixel-00.ivf",
  "vp90-2-02-size-lf-1920x1080.webm", "vp90-2-09-aq2.webm",
  "vp90-2-09-lf_deltas.webm", "vp90-2-10-show-existing-frame.webm",
  "vp90-2-10-show-existing-frame2.webm",
  "vp90-2-11-size-351x287.webm", "vp90-2-11-size-351x288.webm",
  "vp90-2-11-size-352x287.webm", "vp90-2-12-droppable_1.ivf",
  "vp90-2-12-droppable_2.ivf", "vp90-2-12-droppable_3.ivf",
#if !CONFIG_SIZE_LIMIT || \
    (DECODE_WIDTH_LIMIT >= 20400 && DECODE_HEIGHT_LIMIT >= 120)
  "vp90-2-13-largescaling.webm",
#endif
  "vp90-2-14-resize-fp-tiles-1-16.webm",
  "vp90-2-14-resize-fp-tiles-1-2-4-8-16.webm",
  "vp90-2-14-resize-fp-tiles-1-2.webm", "vp90-2-14-resize-fp-tiles-1-4.webm",
  "vp90-2-14-resize-fp-tiles-16-1.webm", "vp90-2-14-resize-fp-tiles-16-2.webm",
  "vp90-2-14-resize-fp-tiles-16-4.webm",
  "vp90-2-14-resize-fp-tiles-16-8-4-2-1.webm",
  "vp90-2-14-resize-fp-tiles-16-8.webm", "vp90-2-14-resize-fp-tiles-1-8.webm",
  "vp90-2-14-resize-fp-tiles-2-16.webm", "vp90-2-14-resize-fp-tiles-2-1.webm",
  "vp90-2-14-resize-fp-tiles-2-4.webm", "vp90-2-14-resize-fp-tiles-2-8.webm",
  "vp90-2-14-resize-fp-tiles-4-16.webm", "vp90-2-14-resize-fp-tiles-4-1.webm",
  "vp90-2-14-resize-fp-tiles-4-2.webm", "vp90-2-14-resize-fp-tiles-4-8.webm",
  "vp90-2-14-resize-fp-tiles-8-16.webm", "vp90-2-14-resize-fp-tiles-8-1.webm",
  "vp90-2-14-resize-fp-tiles-8-2.webm", "vp90-2-14-resize-fp-tiles-8-4.webm",
  "vp90-2-14-resize-10frames-fp-tiles-1-2-4-8.webm",
  "vp90-2-14-resize-10frames-fp-tiles-1-2.webm",
  "vp90-2-14-resize-10frames-fp-tiles-1-4.webm",
  "vp90-2-14-resize-10frames-fp-tiles-1-8.webm",
  "vp90-2-14-resize-10frames-fp-tiles-2-1.webm",
  "vp90-2-14-resize-10frames-fp-tiles-2-4.webm",
  "vp90-2-14-resize-10frames-fp-tiles-2-8.webm",
  "vp90-2-14-resize-10frames-fp-tiles-4-1.webm",
  "vp90-2-14-resize-10frames-fp-tiles-4-2.webm",
  "vp90-2-14-resize-10frames-fp-tiles-4-8.webm",
  "vp90-2-14-resize-10frames-fp-tiles-8-1.webm",
  "vp90-2-14-resize-10frames-fp-tiles-8-2.webm",
  "vp90-2-14-resize-10frames-fp-tiles-8-4-2-1.webm",
  "vp90-2-14-resize-10frames-fp-tiles-8-4.webm",
  "vp90-2-15-segkey.webm", "vp90-2-15-segkey_adpq.webm",
  "vp90-2-16-intra-only.webm", "vp90-2-17-show-existing-frame.webm",
  "vp90-2-18-resize.ivf", "vp90-2-19-skip.webm",
  "vp90-2-19-skip-01.webm", "vp90-2-19-skip-02.webm",
  "vp91-2-04-yuv444.webm",
  "vp91-2-04-yuv422.webm", "vp91-2-04-yuv440.webm",
#if CONFIG_VPX_HIGHBITDEPTH
  "vp92-2-20-10bit-yuv420.webm", "vp92-2-20-12bit-yuv420.webm",
  "vp93-2-20-10bit-yuv422.webm", "vp93-2-20-12bit-yuv422.webm",
  "vp93-2-20-10bit-yuv440.webm", "vp93-2-20-12bit-yuv440.webm",
  "vp93-2-20-10bit-yuv444.webm", "vp93-2-20-12bit-yuv444.webm",
#endif  // CONFIG_VPX_HIGHBITDEPTH
  "vp90-2-20-big_superframe-01.webm", "vp90-2-20-big_superframe-02.webm",
  RESIZE_TEST_VECTORS
};
const int kNumVP9TestVectors = NELEMENTS(kVP9TestVectors);
const char *const kVP9TestVectorsResize[] = {
  RESIZE_TEST_VECTORS
};
const int kNumVP9TestVectorsResize = NELEMENTS(kVP9TestVectorsResize);
#undef RESIZE_TEST_VECTORS
#endif  // CONFIG_VP9_DECODER

}  // namespace libvpx_test

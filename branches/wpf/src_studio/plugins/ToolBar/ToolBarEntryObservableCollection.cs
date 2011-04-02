﻿using GeoGen.Studio.Utilities.Collections;

namespace GeoGen.Studio.PlugIns
{
    /// <summary>
    /// Sorted observable collection of <see cref="ToolBarEntry"/>
    /// </summary>
    public class ToolBarEntryObservableCollection : SortedObservableCollection<ToolBarEntry>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ToolBarEntryObservableCollection"/> class.
        /// </summary>
        public ToolBarEntryObservableCollection() : base(new PriorityComparer()) { }
    }
}

package ue09.gui;

import java.util.List;
import javax.swing.AbstractListModel;
import ue09.data.PytTrip;

/**
 *
 * @author robu
 */
public class PytTripListModel extends AbstractListModel<PytTrip>
{
  private final List<PytTrip> pytTrips;
  
  public PytTripListModel(List pytTrips)
  {
    this.pytTrips = pytTrips;
  }
  
  @Override
  public int getSize()
  {
    return pytTrips.size();
  }
  @Override
  public PytTrip getElementAt(int index)
  {
    return pytTrips.get(index);
  }
  
}
